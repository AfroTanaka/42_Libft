#include <stdio.h>

int main()
{
	char s[] = "hello\0World";
	printf("Literal: %lu\n", sizeof("hello\0WOrld"));
	printf("s: %lu\n", sizeof(s));
}
