#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{	
	char *s1 = "AAAAAAAAAAAAA";
 	size_t max = strlen(s1);
 	char *i1 = strnstr(s1, s1, max);
 	char *i2 = ft_strnstr(s1, s1, max);
	printf("original: %s\nmine: %s\n", i1, i2);
	if (i1 == i2)
		puts("Got it");
	else
		puts("fxxxxxx");
}
