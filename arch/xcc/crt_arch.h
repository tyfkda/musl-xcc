__asm(
".text \n"
".globl " START " \n"
START ": \n"
"	xor %rbp,%rbp \n"
"	mov %rsp,%rdi \n"
// ".weak _DYNAMIC \n"
// ".hidden _DYNAMIC \n"
// "	lea _DYNAMIC(%rip),%rsi \n"
"	and $-16,%rsp \n"
"	call " START "_c \n"
);
