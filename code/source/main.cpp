#include "common/advanced_context.h"
#include "game/context.h"
#include "game/sound.h"
#include "rnd/rheap.h"
#include "z3d/z3DVec.h"

namespace rnd {
  void Init(Context& context) {
    // XXX: Temp switch to ensure patch is running.

    rHeap_Init();
    // SaveFile_LoadExtSaveData(1);
    //  TODO: Maybe make this an option?
#if defined ENABLE_DEBUG || defined DEBUG_PRINT
    util::Print("MM3DR Initialized (" __DATE__ " " __TIME__ ")\n");
    game::sound::PlayEffect(game::sound::EffectId::NA_SE_SY_CHAT_ALLERT);
#else
    game::sound::PlayEffect(game::sound::EffectId::NA_SE_SY_CLEAR1);
#endif
    context.has_initialised = true;
  }
  extern "C" {
  void* __service_ptr = nullptr;
  char* fake_heap_start;
  char* fake_heap_end;
  extern void (*__init_array_start[])(void) __attribute__((weak));
  extern void (*__init_array_end[])(void) __attribute__((weak));

#if defined ENABLE_DEBUG || defined DEBUG_PRINT
  static bool titlePlayed = false;
#endif
  void calc(game::State* state) {
    Context& context = GetContext();
    context.gctx = nullptr;

    if (!context.has_initialised && state->type == game::StateType::FirstGame) {
      Init(context);
    }

    return;
  }
  }

}  // namespace rnd