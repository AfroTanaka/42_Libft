#include "libft.h"
#include <stdio.h>

int main()
{
	unsigned int	divisor = 100;
	int n = 123;
	unsigned int	i = 0;
	unsigned int	size = 3;

	char s[5] = {0};
	
	while (i < size)
	{
		s[i] = n / divisor + '0';
		n %= divisor;
		divisor /= 10;
		i++;
	}
	puts(s);
}
