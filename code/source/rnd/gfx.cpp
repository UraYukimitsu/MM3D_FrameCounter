#include "game/ui.h"
#include "rnd/gfx.h"

namespace rnd {
  static u8 GfxInit = 0;
  int frame_counter = 0;



  void Gfx_Init(void) {
    Draw_SetupFramebuffer();
    Draw_ClearBackbuffer();

    GfxInit = 1;
  }

  extern "C" {
  void Gfx_Update() {
    if (!GfxInit) {
      Gfx_Init();
    }

    if (!game::ui::CheckCurrentScreen(game::ui::ScreenType::Main)) {
      frame_counter = 0;
    } else {
      frame_counter += 1;
    }
    Draw_Lock();
    Draw_DrawFormattedStringTop(10, 10, COLOR_WHITE, "%d", frame_counter);
    Draw_Unlock();
  }
  }

}  // namespace rnd
