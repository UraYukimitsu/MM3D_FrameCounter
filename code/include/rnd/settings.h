#ifndef _RND_SETTINGS_H_
#define _RND_SETTINGS_H_

#include "common/advanced_context.h"
#include "game/common_data.h"
#include "z3d/z3Dvec.h"

namespace rnd {
  enum class BooleanSetting : u8 {
    OFF,
    ON,
  };

  enum class SkipSetting : u8 {
    DONT_SKIP,
    SKIP,
  };

  enum class LogicSetting :u8 {
    LOGIC_GLITCHLESS,
    LOGIC_NONE,
  };

  enum class AmmoDropsSetting : u8 {
    AMMODROPS_VANILLA,
    AMMODROPS_BOMBCHU,
    AMMODROPS_NONE,
  };

  enum class HeartDropRefillSetting : u8 {
    HEARTDROPREFILL_VANILLA,
    HEARTDROPREFILL_NODROP,
    HEARTDROPREFILL_NOREFILL,
    HEARTDROPREFILL_NODROPREFILL,
  };

  enum class RewardShuffleSetting : u8 {
    REWARDSHUFFLE_END_OF_DUNGEON,
    REWARDSHUFFLE_ANY_DUNGEON,
    REWARDSHUFFLE_OVERWORLD,
    REWARDSHUFFLE_ANYWHERE,
  };

  enum class GreatFairyRewardShuffleSetting : u8 {
    GFREWARDSHUFFLE_VANILLA,
    GFREWARDSHUFFLE_ALL_GREAT_FARIES,
    GFREWARDSHUFFLE_ANYWHERE,
  };

  enum class LinksPocketSetting : u8 {
    LINKSPOCKETITEM_ADVANCEMENT,
    LINKSPOCKETITEM_NOTHING,
  };

  enum class SongShuffleSetting : u8 {
    SONGSHUFFLE_SONG_LOCATIONS,
    SONGSHUFFLE_DUNGEON_REWARDS,
    SONGSHUFFLE_ANYWHERE,
  };

  enum class ShopsanitySetting : u8 {
    SHOPSANITY_OFF,
    SHOPSANITY_ZERO,
    SHOPSANITY_ONE,
    SHOPSANITY_TWO,
    SHOPSANITY_THREE,
    SHOPSANITY_FOUR,
    SHOPSANITY_RANDOM,
  };

  /*enum class TokensanitySetting : u8 {
    TOKENSANITY_OFF,
    TOKENSANITY_DUNGEONS,
    TOKENSANITY_OVERWORLD,
    TOKENSANITY_ALL_TOKENS,
  };*/

  enum class ScrubsanitySetting : u8 {
    SCRUBSANITY_OFF,
    SCRUBSANITY_AFFORDABLE,
    SCRUBSANITY_EXPENSIVE,
    SCRUBSANITY_RANDOM_PRICES,
  };

  enum class ShuffleMerchantsSetting : u8 {
    SHUFFLEMERCHANTS_OFF,
    SHUFFLEMERCHANTS_NO_HINTS,
    SHUFFLEMERCHANTS_HINTS,
  };

  enum class MapsAndCompassesSetting : u8 {
    MAPSANDCOMPASSES_START_WITH,
    MAPSANDCOMPASSES_VANILLA,
    MAPSANDCOMPASSES_OWN_DUNGEON,
    MAPSANDCOMPASSES_ANY_DUNGEON,
    MAPSANDCOMPASSES_OVERWORLD,
    MAPSANDCOMPASSES_ANYWHERE,
  };

  enum class KeysanitySetting : u8 {
    KEYSANITY_START_WITH,
    KEYSANITY_VANILLA,
    KEYSANITY_OWN_DUNGEON,
    KEYSANITY_ANY_DUNGEON,
    KEYSANITY_OVERWORLD,
    KEYSANITY_ANYWHERE,
  };

  enum class BossKeysanitySetting : u8 {
    BOSSKEYSANITY_START_WITH,
    BOSSKEYSANITY_VANILLA,
    BOSSKEYSANITY_OWN_DUNGEON,
    BOSSKEYSANITY_ANY_DUNGEON,
    BOSSKEYSANITY_OVERWORLD,
    BOSSKEYSANITY_ANYWHERE,
  };

  enum class ExcludeLocationSetting : u8 {
    INCLUDE,
    EXCLUDE,
  };

  enum class StartingInventorySetting : u8 {
    STARTINGINVENTORY_NONE,
  };

  enum class LogicTrickSetting : u8 {
    TRICK_DISABLED,
    TRICK_ENABLED,
  };

  enum class DamageMultiplierSetting : u8 {
    DAMAGEMULTIPLIER_HALF,
    DAMAGEMULTIPLIER_DEFAULT,
    DAMAGEMULTIPLIER_DOUBLE,
    DAMAGEMULTIPLIER_QUADRUPLE,
    DAMAGEMULTIPLIER_OCTUPLE,
    DAMAGEMULTIPLIER_SEXDECUPLE,
    DAMAGEMULTIPLIER_OHKO,
  };

  enum class GossipStoneHintsSetting : u8 {
    HINTS_NO_HINTS,
    HINTS_NEED_NOTHING,
    HINTS_MASK_OF_TRUTH,
  };

  enum class ItemPoolSetting : u8 {
    ITEMPOOL_PLENTIFUL,
    ITEMPOOL_BALANCED,
    ITEMPOOL_SCARCE,
    ITEMPOOL_MINIMAL,
  };

  enum class IceTrapSetting : u8 {
    ICETRAPS_OFF,
    ICETRAPS_NORMAL,
    ICETRAPS_EXTRA,
    ICETRAPS_MAYHEM,
    ICETRAPS_ONSLAUGHT,
  };

  enum class RSDURABILITYSetting : u8 {
    RSDURABILITY_VANILLA,
    RSDURABILITY_RANDOMRISK,
    RSDURABILITY_RANDOMSAFE,
  };

  enum class StartingBottleSetting : u8 {
    STARTINGBOTTLE_NONE,
    STARTINGBOTTLE_EMPTY_BOTTLE = 0x12,
    STARTINGBOTTLE_RED_POTION,
    STARTINGBOTTLE_GREEN_POTION,
    STARTINGBOTTLE_BLUE_POTION,
    STARTINGBOTTLE_FAIRY,
    STARTINGBOTTLE_DEKU_PRINCESS,
    STARTINGBOTTLE_MILK,
    STARTINGBOTTLE_MILK_HALF,
    STARTINGBOTTLE_FISH,
    STARTINGBOTTLE_BUGS,
    STARTINGBOTTLE_BIG_POE = 0x1E,
    STARTINGBOTTLE_SPRING_WATER,
    STARTINGBOTTLE_HOT_SPRING_WATER,
    STARTINGBOTTLE_ZORA_EGG,
    STARTINGBOTTLE_GOLD_DUST,
    STARTINGBOTTLE_MAGICAL_MUSHROOM,
    STARTINGBOTTLE_SEAHORSE,
    STARTINGBOTTLE_CHATEAU_ROMANI,
    STARTINGBOTTLE_MYSTERY_MILK,
    STARTINGBOTTLE_MYSTERY_MILK_SPOILED,
  };

  enum class StartingSwordSetting : u8 {
    STARTINGSWORD_KOKIRI,
    STARTINGSWORD_RAZOR,
    STARTINGSWORD_GILDED,
  };

  enum class StartingTradeItemSetting : u8 {
    STARTINGSWORD_MOON_TEAR,
    STARTINGSWORD_LAND_TITLE_DEED,
    STARTINGSWORD_SWAMP_TITLE_DEED,
    STARTINGSWORD_MOUNTAIN_TITLE_DEED,
    STARTINGSWORD_OCEAN_TITLE_DEED,
    STARTINGSWORD_ROOM_KEY,
    STARTINGSWORD_LETTER_TO_MAMA,
    STARTINGSWORD_LETTER_TO_KAFEI,
    STARTINGSWORD_PENDANT_OF_MEMORIES,
  };

  typedef struct {
    u8 hashIndexes[5];

    u8 logic;

    u8 shuffleDungeonEntrances;
    u8 bombchusInLogic;
    u8 ammoDrops;
    u8 heartDropRefill;

    u8 shuffleRewards;
    u8 shuffleGreatFairyRewards;
    u8 linksPocketItem;
    u8 shuffleSongs;
    u8 tokensanity;
    u8 scrubsanity;
    u8 shopsanity;
    u8 shuffleMagicBeans;
    u8 shuffleMerchants;

    u8 mapsAndCompasses;
    u8 keysanity;
    u8 bossKeysanity;

    u8 skipEponaRace;
    u8 skipMinigamePhases;

    u8 damageMultiplier;
    u8 gossipStoneHints;
    u8 chestAnimations;
    u8 chestSize;
    u8 generateSpoilerLog;
    u8 ingameSpoilers;
    u8 menuOpeningButton;
    u8 randomTrapDmg;

    u8 rsDurability;

    u8 itemPoolValue;
    u8 iceTrapValue;

    u8 customTunicColors;
    u8 coloredKeys;
    u8 coloredBossKeys;

    u8 odolwaTrialSkip;
    u8 gohtTrialSkip;
    u8 gyorgTrialSkip;
    u8 twinmoldTrialSkip;


    u32 linksTradeItemBitMask;

    u8 startingConsumables;
    u8 startingMaxRupees;
    u8 startingOcarina;
    u8 startingHerosBow;
    u8 startingFireArrows;
    u8 startingIceArrows;
    u8 startingLightArrows;
    u8 startingBombBag;
    u8 startingBombchus;
    u8 startingStickCapacity;
    u8 startingNutCapacity;
    u8 startingMagicBean;
    u8 startingPowderKeg;
    u8 startingPictographBox;
    u8 startingLensOfTruth;
    u8 startingHookshot;
    u8 startingGreatFairySword;
    u8 startingBottle1;
    u8 startingBottle2;
    u8 startingBottle3;
    u8 startingBottle4;
    u8 startingBottle5;
    u8 startingBottle6;
    u8 startingBottle7;
    
    u8 startingKokiriSword;
    u8 startingRazorSword;
    u8 startingGildedSword;
    u8 startingMagicMeter;
    u8 startingDoubleDefense;
    u8 startingHealth;

    u32 startingQuestItems;
    u32 startingDungeonReward;
    u32 startingEquipment;
    u32 startingUpgrades;


  } SettingsContext;

  extern SettingsContext gSettingsContext;
  extern const char hashIconNames[32][25];

  s32 Settings_ApplyDamageMultiplier(game::GlobalContext *, s32);
  u32 Hash(u32);
  u8 Bias(u32);
} // namespace rnd
#endif