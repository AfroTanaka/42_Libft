#include <stdio.h>
#include <limits.h>

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
	printf("%lu\n", ULONG_MAX + 1);
}
