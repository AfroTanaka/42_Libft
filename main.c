#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*int funcB(int i)
{
	return i + 3;
}
int funcC(int i)
{
	return i - 2;
}
int funcD(int i)
{
	return i * 2;
}

int funcA(int i)
{
	return (i = funcB(i), i = funcC(i), i = funcD(i), i);
}

int main()
{
	printf("%d\n", funcA(1));
}*/
int main()
{
	//printf("%lu\n", ULONG_MAX + 1);
//	printf("%d\n", 1/ 0);
	//printf("%zu\n", SIZE_MAX);
	/*char *s = "";
	printf("s_add: %p\n", s);
	free(s);*/
	printf("%ld\n", __STDC_VERSION__);
}
