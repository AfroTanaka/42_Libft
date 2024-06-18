#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p;

	p = calloc(10, sizeof(char));
	for (int i = 0; i < 10; i++)
	{
		p[i] = 'A' + i;
	}
	printf("%s\n", p);
	//p = (free(p), NULL);
	p = (free(p), NULL);
	if (!p)
		puts("Success!");
	else
		puts("Failed");
}
