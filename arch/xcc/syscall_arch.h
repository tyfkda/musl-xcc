#define __SYSCALL_LL_E(x) (x)
#define __SYSCALL_LL_O(x) (x)

static long int __syscall0(long int a) { (void)a; return 0; }
static long int __syscall1(long int a, long int b) { (void)a; (void)b; return 0; }
static long int __syscall2(long int a, long int b, long int c) { (void)a; (void)b; (void)c; return 0; }
static long int __syscall3(long int a, long int b, long int c, long int d) { (void)a; (void)b; (void)c; (void)d; return 0; }
static long int __syscall4(long int a, long int b, long int c, long int d, long int e) { (void)a; (void)b; (void)c; (void)d; (void)e; return 0; }
static long int __syscall5(long int a, long int b, long int c, long int d, long int e, long int f) { (void)a; (void)b; (void)c; (void)d; (void)e; (void)f; return 0; }
static long int __syscall6(long int a, long int b, long int c, long int d, long int e, long int f, long int g) { (void)a; (void)b; (void)c; (void)d; (void)e; (void)f; (void)g; return 0; }
static long int __syscall7(long int a, long int b, long int c, long int d, long int e, long int f, long int g, long int h) { (void)a; (void)b; (void)c; (void)d; (void)e; (void)f; (void)g; (void)h; return 0; }
