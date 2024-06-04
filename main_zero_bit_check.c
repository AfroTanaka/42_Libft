#include <stdio.h>

int main()
{
	int n = 0;
	for (int i = 31; i >= 0; i--)
	{
		if ((i + 1) % 8 == 0)
			printf(" ");
		printf("%d", (n >> i) & 1);
	}
	puts("");
}
