.arm
.text

.global hook_MainLoop
hook_MainLoop:
    push {r0-r12, lr}
    bl calc
    pop {r0-r12, lr}
    ldr r1, [r0,#0x138]
    b 0x0106770

.global hook_Gfx_Update
hook_Gfx_Update:
    push {r0-r12, lr}
    bl Gfx_Update
    pop {r0-r12, lr}
    pop {r4-r8, pc}

.section .loader
.global hook_into_loader
hook_into_loader:
    push {r0-r12, lr}
    bl loader_main
    pop {r0-r12, lr}
    bl 0x100024
    b  0x100004
