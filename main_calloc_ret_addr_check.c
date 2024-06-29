#include "libft.h"
#include <stdio.h>

char *func(void)
{
	char *p;

	p = ft_calloc(1, 1);
	printf("p_addr in func: %p\n", p);
	return (p);
}

int main()
{
	char *p;

	p = func();
	printf("p_addr of *p in main: %p\n", *p);
	printf("p_addr of p in main: %p\n", p);
}
