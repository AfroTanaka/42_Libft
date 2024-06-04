#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void func(char *s)
{
	unsigned int i = 1;
	puts("\x1b[31mIn func...\x1b[0m");
	printf("func_s_addr: %p\n", s);
	printf("s: %s\n", s);
	s += i;
	printf("func_s_addr: %p\n", s);
	printf("s: %s\n", s);
}

int main()
{
	char *s;

	s = ft_strdup("HelloWorld");
	printf("s_addr: %p\n", s);
	printf("s: %s\n", s);
	puts("");
	puts("\x1b[31mExecute func...\x1b[0m");
	func(s);
	puts("");
	puts("\x1b[31mAfter returning func...\x1b[0m");
	printf("s_addr: %p\n", s);
	printf("s: %s\n", s);
	puts("");
}
