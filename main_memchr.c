#include "libft.h"
#include <string.h>

int main()
{
	//char *p_memchr;
	//char *p_ft_memchr;

	//p_memchr = memchr("\200", '\200', 1);
	//p_ft_memchr = ft_memchr("\200", '\200', 1);
	/*p_memchr = memchr("/|\x12\xff\x09\x42\2002\42|\\", '\200', 10);
	p_ft_memchr = ft_memchr("/|\x12\xff\x09\x42\2002\42|\\", '\200', 10);
	printf("memchr: %s\n", p_memchr);
	printf("ft_memchr: %s\n", p_ft_memchr);
	if (*p_memchr == *p_ft_memchr)
		puts("Same");
	else
		puts("Different");*/
	//char c = '\200';
	//char d = -128;
	unsigned char a = '\200';
	//signed char  n = '\200';
	int  n = '\200';

	/*if (c == d)
		puts("Same");
	if (c == a)
		puts("Same");
	else
		puts("Different");*/
	if (n == a)
		puts("Same");
	else
		puts("Different");
}
