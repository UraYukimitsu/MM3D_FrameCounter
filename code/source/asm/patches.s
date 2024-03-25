.arm

.section .patch_MainLoop
.global patch_MainLoop
patch_MainLoop:
    b hook_MainLoop

.section .patch_Gfx_Update
.global Gfx_Update_patch
Gfx_Update_patch:
    b hook_Gfx_Update

.section .patch_loader
.global loader_patch
loader_patch:
    b hook_into_loader