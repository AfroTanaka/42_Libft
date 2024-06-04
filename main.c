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
char func(char c)
{
	return c;
}

int main()
{
	//printf("%lu\n", ULONG_MAX + 1);
//	printf("%d\n", 1/ 0);
	//printf("%zu\n", SIZE_MAX);
	/*char *s = "";
	printf("s_add: %p\n", s);
	free(s);*/
	//printf("%ld\n", __STDC_VERSION__);
	/*char s[] = "Hello\n";
	printf("%c\n", s[5]);
	s[5] = 'A';
	printf("%c\n", s[5]);*/
	//printf("%c", (('A') + 2));
	//char c = 'C';
	//char s[] = {'A', 'B',func(c), 'D', '\0'};
	//printf("%s\n", s);
	/*printf("%zu\n", SIZE_MAX);
	printf("%zu\n", (size_t)INT_MIN);
	printf("%zu\n", INT_MIN);*/
	printf("%d\n", CHAR_MIN);
	printf("%u\n", (unsigned int)CHAR_MIN);
	printf("%u\n", CHAR_MIN);
	//int n = INT_MIN;
	//size_t n = (size_t)INT_MIN;
	/*for (int i = 31; i >= 0; i--)
	{
		if ((i + 1) % 8 == 0)
			printf(" ");
		printf("%zu", (n >> i) & 1);
	}
	puts("");*/
	/*signed char n = -128;
	printf("%u\n", n);
	for (int i = 31; i >= 0; i--)
	{
		if ((i + 1) % 8 == 0)
			printf(" ");
		printf("%d", (n >> i) & 1);
	}
	puts("");
	unsigned int m = (unsigned int) n;
	printf("%u\n", m);
	for (int i = 31; i >= 0; i--)
	{
		if ((i + 1) % 8 == 0)
			printf(" ");
		printf("%d", (n >> i) & 1);
	}
	puts("");*/
}
