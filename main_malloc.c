#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p;

	p = (char *)malloc(0);
	if (!p)
		puts("OMG");
	else
		puts("Success!");
}
