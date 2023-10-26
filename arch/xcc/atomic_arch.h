#define a_cas a_cas
#define a_cas_p a_cas_p

static int a_cas(volatile int *p, int t, int s) { return 0; }
static void *a_cas_p(volatile void *p, void *t, void *s) { return 0; }
