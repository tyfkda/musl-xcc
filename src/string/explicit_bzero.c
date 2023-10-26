#define _BSD_SOURCE
#include <string.h>

void explicit_bzero(void *d, size_t n)
{
	memset(d, 0, n);
}
