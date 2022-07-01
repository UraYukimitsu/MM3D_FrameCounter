#ifndef _GAME_ACTOR_H
#define _GAME_ACTOR_H

#include "common/bitfield.h"
#include "common/flags.h"
#include "common/types.h"
#include "common/utils.h"
#include "game/sound.h"
#include "z3d/z3DVec.h"

namespace game {
  struct GlobalContext;
}

namespace game::act {

  class Actor;

  enum class Id : u16 {
    // [2] Player actor
    Player = 0,
    // Arrow
    Arrow = 0xf,
    // DayTimer
    DayTimer = 0xf5,
    // Elegy of Emptiness statue
    ObjElegyStatue = 0x1F,
    // Clear Tag (?)
    ClearTag = 0x73,
    // [1] Deku Palace / Woodfall Temple moving platforms (after player lands on them)
    ObjRailLift = 0xd8,
    // [9] Odolwa
    BossOdolwa = 0xcb,
    // [9] Twinmold (Red/Blue)
    BossTwinmold = 0xcc,
    // [9] Gyorg
    BossGyorg = 0xcd,
    // [4] Kafei
    NpcKafei = 0x00F4,
    // Ice platform created using ice arrows.
    BgIcePlatform = 0x013E,
    // Goht
    BossGoht = 0x016E,
    // [7] Owl statue
    ObjOwlStatue = 0x01B2,
    // [4] Old Lady from Bomb Shop
    NpcOldLady = 0x01C5,
    // [4] Rosa Sisters
    NpcRosaSisters = 0x020A,
    // [4] Bombers
    NpcBombers = 0x020F,
    // [6] Sheikah Hint Stone (MM3D)
    NpcHintStone = 0x0241,
    // [6] New in MM3D. Shows up as sparkles and spawns an ice platform (actor 0x13E) when hit.
    BgSeaFreezablePoint = 0x0244,
  };

  // https://wiki.cloudmodding.com/oot/Actors#Categories
  enum class Type : u8 {
    Switch = 0,
    Background = 1,
    Player = 2,
    Bomb = 3,
    Npc = 4,
    Enemy = 5,
    Prop = 6,
    Item = 7,
    Misc = 8,
    Boss = 9,
    Door = 10,
    Chest = 11,
  };

  using MainFunc = void(Actor* self, GlobalContext* gctx);

  // Typically used in derived actors to implement states ("modes") for actor state machines.
  template <typename ActorType>
  using ActionFunc = void(ActorType* self, GlobalContext* gctx);

  struct ActorInfo {
    Id id;
    Type type;
    u8 room;
    u32 flags;
    u16 object_id;
    u8 anonymous_3[2];
    size_t inst_size;
    MainFunc* init_fn;
    MainFunc* deinit_fn;
    MainFunc* calc_fn;
    MainFunc* draw_fn;
  };

  // Actor overlay info. Same structure as Majora's Mask, though most fields are now unused.
  struct ActorOverlayInfo {
    int field_0;
    int field_4;
    int increment_loaded_count;
    int field_C;
    int field_10;
    ActorInfo* info;
    const char* name;
    u16 allocation_type;
    u8 loaded_count;
  };

  enum class DamageType : u8 {
    Type1 = 1,
    FireArrow = 2,
    IceArrow = 3,
    Type4 = 4,
    Hookshot = 0xA,
    TypeB = 0xB,
    TypeC = 0xC,
    ArrowOrZoraBoomerang = 0xD,
    SwordOrBombOrBeamOrZora = 0xE,
    DekuNut = 0xF,
  };
  union DamageTableEntry {
    u8 raw;
    BitField<4, 4, DamageType> type;
    BitField<0, 4, u8> damage;
  };
  struct DamageTable {
    DamageTableEntry entries[32];
  };
  static_assert(sizeof(DamageTable) == 0x20);

  struct PosRot {
    z3dVec3f pos;
    z3dVec3s rot;
  };
  static_assert(sizeof(PosRot) == 0x14);

  struct Actor {
    enum class Flag : u32 {
      Targetable = 0x1,
      TalkInitiated = 0x100,
    };

    enum class Flag94 : u16 {
      Grounded = 1,
    };

    void Free();

    Id id;
    Type actor_type;
    u8 room_number;
    rnd::Flags<Flag> flags;
    PosRot initial_pos;
    u16 params;
    u8 object_id;
    u8 field_1F;
    u16 field_20;
    u16 field_22;
    PosRot pos;
    int field_38;
    // u8 gap_38;
    // u8 field_39; // Possible actor flags.
    // u8 gap_3A[2];
    PosRot ztarget_pos;
    sound::EffectId sound_effect;
    u8 gap_54[4];
    z3dVec3f model_scale;
    z3dVec3f vel;
    float vel_xz;
    float vel_y;
    float field_78;
    u8 gap_7c[4];
    u32 field_80;
    u8 gap_84;
    u8 field_85;
    // u8 gap86[3];
    u16 field_86;
    // u8 gap_89[3];
    float field_88;
    // Distance to water/submerged? After -30.99 it goes to -32000.00
    float dist_to_water_maybe;
    // u8 gap_90[4];
    void** cmab_file;
    rnd::Flags<Flag94> flags_94;
    s16 field_96;
    float field_98;
    float distance_to_link;
    float height_diff_to_link;
    DamageTable* damage_table;
    // Changing x and z causes link to slide across plane in direction.
    z3dVec3f target_pos_maybe;
    u32 field_B4;
    u16 field_B8;
    u8 field_BA;
    /// Used by Twinmold at least. Unused for player?
    s8 life;
    u8 damage;
    DamageType damage_type;
    u8 field_BE;
    u8 field_BF;
    // u16 field_C0;
    // u16 angle;
    z3dVec3s angle;
    // u16 field_C4;
    u8 gap_C6[2];
    float field_C8;
    u32 field_CC;
    float field_D0;
    u8 field_D4;
    u8 gap_D5[27];
    z3dVec3f field_F0;
    u32 field_FC;
    z3dVec3f field_100;
    z3dVec3f actor_coords;
    u8 field_118;
    u8 gap119;
    u16 text_id_maybe;
    u16 field_11C;
    u16 field_11E;
    u8 gap_120[5];
    u8 field_125;
    u8 gap_126[2];
    Actor* child_actor;
    Actor* parent_actor;
    /// Previous actor of the same type in the linked list.
    Actor* prev;
    /// Next actor of the same type in the linked list.
    Actor* next;
    MainFunc* init_fn;
    MainFunc* deinit_fn;
    MainFunc* calc_fn;
    MainFunc* draw_fn;
    ActorOverlayInfo* overlay_info;
    float field_14C;
    float field_150;
    float field_154;
    int field_158;
    float field_15C;
    float field_160;
    float field_164;
    int field_168;
    float field_16C;
    float field_170;
    float field_174;
    int field_178;
    void* field_17C;
    char field_180[80];
    int field_1D0;
    u8 field_1D4;
    int field_1D8;
    int field_1DC;
    int field_1E0;
    int field_1E4;
    int field_1E8;
    u16 field_1EC;
    int field_1F0;
    float field_1F4;
  };
  static_assert(sizeof(Actor) == 0x1F8);
  static_assert(offsetof(Actor, field_80) == 0x80);
  static_assert(offsetof(Actor, field_B4) == 0xB4);
  static_assert(offsetof(Actor, field_F0) == 0xF0);
  static_assert(offsetof(Actor, field_11C) == 0x11C);

  // Name courtesy of the OoT decomp project.
  struct DynaPolyActor : Actor {
    u32 dyna_poly_id;
    float field_1FC;
    float field_200;
    u16 field_204;
    u8 field_206;
    u32 dyna_poly_flags;
  };
  static_assert(sizeof(DynaPolyActor) == 0x20C);

  struct DayTimerActor {
    Actor common_actor;
    u8 evening;
    u8 field_1F9;
    u16 time;
    u8 gap_1FC[2];
    u16 field_1FE;
    u8 gap_200[4];
    u32 daytimer_calc;
    u32 field_208;
  };
  static_assert(sizeof(DayTimerActor) == 0x20C);

  ActorOverlayInfo* GetActorOverlayInfoTable();

}  // namespace game::act

#endif