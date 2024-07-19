#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define ARG1 "lorem ipsum dolor sit amet"
#define ARG2 "dolor"
#define ARG3 0

int main()
{
	char s[] = "Hello";
	//printf("original: %s\nmine: %s\n",memcpy(((void *)0), ((void *)0), 3), ft_memcpy(((void *)0), ((void *)0), 3));
	//printf("original: %s\n",memcpy(((void *)0), ((void *)0), 3));
	//printf("original: %s\n",memcpy(((void *)0), s, 3));
	//printf("original: %s\n",memcpy(s, ((void *)0), 3));
	//printf("mine: %s\n",ft_memcpy(((void *)0), ((void *)0), 3));
	//printf("mine: %s\n",ft_memcpy(((void *)0), s, 3));
	//printf("mine: %s\n",ft_memcpy(s, ((void *)0), 3));
	//printf("original: %s\n",memcpy(s, NULL, 3));
	printf("mine: %s\n",ft_memcpy(s, NULL, 3));
}
