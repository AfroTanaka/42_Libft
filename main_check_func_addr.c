#include <stdio.h>

void hello()
{
	printf("hello(): %p\n", hello);
}

int main()
{
	printf("main(): %p\n", main);
	hello();
}
