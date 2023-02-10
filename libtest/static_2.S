.text
.align 4
.intel_syntax noprefix

.globl ASMTest

ASMTest:

    sub     edi, esi
    mov     eax, edi
    inc     eax
    
    ret


