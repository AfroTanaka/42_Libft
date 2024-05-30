#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int main()
{
	char *s1;
	char *s2;

	s1 = (char *)malloc(20);
	s2 = (char *)malloc(20);
	printf("%s\n", ft_strjoin(s1, s2));
}
