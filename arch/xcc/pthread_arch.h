static uintptr_t __get_tp()
{
	__asm("mov %fs:0,%rax");
}

#define MC_PC gregs[REG_RIP]
