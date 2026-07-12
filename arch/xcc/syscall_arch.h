#define __SYSCALL_LL_E(x) (x)
#define __SYSCALL_LL_O(x) (x)

#define SYSCALL_RETW(no, ret, ...) \
    __asm volatile( \
        "mov %1, %%rax\n" \
        "syscall\n" \
        "mov %%eax, %0" \
        : "=r"(ret) \
        : "r"(no), ## __VA_ARGS__)

#define SYSCALL_RETL(no, ret, ...) \
    __asm volatile( \
        "mov %1, %%rax\n" \
        "syscall\n" \
        "mov %%rax, %0" \
        : "=r"(ret) \
        : "r"(no), ## __VA_ARGS__)

#define SYSCALL_RET(no, ret, ...) \
    do { \
      switch (sizeof(ret)) { \
      case 4: SYSCALL_RETW(no, ret, ## __VA_ARGS__); break; \
      case 8: SYSCALL_RETL(no, ret, ## __VA_ARGS__); break; \
      default: __asm("unexpected"); break; \
      }  \
    } while (0)

#define SYSCALL_ARGCOUNT(n)  do { if ((n) >= 4) __asm volatile("mov %rcx, %r10"); } while (0)

static long int __syscall0(long int no) {
    long int ret;
#if defined(__x86_64__)
  SYSCALL_ARGCOUNT(0);
#endif
    SYSCALL_RET(no, ret);
    return ret;
}

static long int __syscall1_(long int a1, long int no) {
    long int ret;
#if defined(__x86_64__)
  SYSCALL_ARGCOUNT(1);
#endif
    SYSCALL_RET(no, ret, "r"(a1));
    return ret;
}
static long int __syscall1(long int no, long int a1) {
    return __syscall1_(a1, no);
}

static long int __syscall2_(long int a1, long int a2, long int no) {
    long int ret;
#if defined(__x86_64__)
  SYSCALL_ARGCOUNT(2);
#endif
    SYSCALL_RET(no, ret, "r"(a1), "r"(a2));
    return ret;
}
static long int __syscall2(long int no, long int a1, long int a2) {
    return __syscall2_(a1, a2, no);
}

static long int __syscall3_(long int a1, long int a2, long int a3, long int no) {
    long int ret;
#if defined(__x86_64__)
  SYSCALL_ARGCOUNT(3);
#endif
    SYSCALL_RET(no, ret, "r"(a1), "r"(a2), "r"(a3));
    return ret;
}
static long int __syscall3(long int no, long int a1, long int a2, long int a3) {
    return __syscall3_(a1, a2, a3, no);
}

static long int __syscall4_(long int a1, long int a2, long int a3, long int a4, long int no) {
    long int ret;
#if defined(__x86_64__)
  SYSCALL_ARGCOUNT(4);
#endif
    SYSCALL_RET(no, ret, "r"(a1), "r"(a2), "r"(a3), "r"(a4));
    return ret;
}
static long int __syscall4(long int no, long int a1, long int a2, long int a3, long int a4) {
    return __syscall4_(a1, a2, a3, a4, no);
}

static long int __syscall5_(long int a1, long int a2, long int a3, long int a4, long int a5, long int no) {
    long int ret;
#if defined(__x86_64__)
  SYSCALL_ARGCOUNT(5);
#endif
    SYSCALL_RET(no, ret, "r"(a1), "r"(a2), "r"(a3), "r"(a4), "r"(a5));
    return ret;
}
static long int __syscall5(long int no, long int a1, long int a2, long int a3, long int a4, long int a5) {
    return __syscall5_(a1, a2, a3, a4, a5, no);
}

static long int __syscall6_(long int a1, long int a2, long int a3, long int a4, long int a5, long int a6, long int no) {
    long int ret;
#if defined(__x86_64__)
  SYSCALL_ARGCOUNT(6);
#endif
    SYSCALL_RET(no, ret, "r"(a1), "r"(a2), "r"(a3), "r"(a4), "r"(a5), "r"(a6));
    return ret;
}
static long int __syscall6(long int no, long int a1, long int a2, long int a3, long int a4, long int a5, long int a6) {
    return __syscall6_(a1, a2, a3, a4, a5, a6, no);
}

static long int __syscall7_(long int a1, long int a2, long int a3, long int a4, long int a5, long int a6, long int a7, long int no) {
    long int ret;
#if defined(__x86_64__)
  SYSCALL_ARGCOUNT(7);
#endif
    SYSCALL_RET(no, ret, "r"(a1), "r"(a2), "r"(a3), "r"(a4), "r"(a5), "r"(a6), "r"(a7));
    return ret;
}
static long int __syscall7(long int no, long int a1, long int a2, long int a3, long int a4, long int a5, long int a6, long int a7) {
    return __syscall7_(a1, a2, a3, a4, a5, a6, a7, no);
}
