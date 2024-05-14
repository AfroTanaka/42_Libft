#include <stdio.h>

int main()
{
	char s[10] = "Hello";
	char *p_s = NULL;
	printf("%zu\n", sizeof(s));
	printf("%zu\n", sizeof(p_s));
}
