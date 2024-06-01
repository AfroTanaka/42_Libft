#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>

int main()
{
	unsigned int size = 20;
	char *s = (char *)malloc(sizeof(char) * size);
	for (unsigned int i = 0; i < size; i++)
		printf("%d ", s[i]);
	puts("");
	memset(s, 0, size);
	memset(s, 'H', 5);
	for (unsigned int i = 0; i < size; i++)
		printf("%d ", s[i]);
	puts("");
	/*s[0] = 'A';
	s[1] = 'B';
	s[2] = 'C';
	for (unsigned int i = 0; i < size; i++)
		printf("%d ", s[i]);
	puts("");*/
	//printf("original: %zu %s\n", strlcat(s, NULL, 20), s);
	//printf("mine: %zu %s\n", ft_strlcat(s, NULL, 20), s);
	printf("will: %zu %s\n", ft_strlcat(s, NULL, 20), s);
	/*for (unsigned int i = 0; i < size; i++)
		printf("%d ", s[i]);
	puts("");*/
	printf("strlen: %zu\n", strlen(s));

}
