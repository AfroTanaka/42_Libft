#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define ARG1 "lorem ipsum dolor sit amet"
#define ARG2 "dolor"
#define ARG3 0

int main()
{
	//char s[] = "Hello";
	//printf("original: %s\n",memmove(((void *)0), ((void *)0), 5));
	//printf("original: %s\n",memmove(((void *)0), s, 5));
	//printf("original: %s\n",memmove(s, ((void *)0), 5));
	
	//printf("mine: %s\n",ft_memmove(((void *)0), ((void *)0), 5));
	//printf("mine: %s\n",ft_memmove(((void *)0), s, 5));
	//printf("mine: %s\n",ft_memmove(s, ((void *)0), 5));
	unsigned int size = 20;
	char *p = (char *)ft_calloc(size, sizeof(char));
	p = ft_memcpy(p, "HelloWorld", 10);
	printf("p_before: %s\n", p);
	printf("p_after: %s\n", memmove(p, p + 1, 2));
	//printf("p_after: %s\n", ft_memmove(p, p + 1, 2));
	free(p);
	p = NULL;
}
