#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define ARG1 "lorem ipsum dolor sit amet"
#define ARG2 "dolor"
#define ARG3 0

int main()
{
	/*char s[] = "tripouille";
	printf("original: %s\n", strchr(s, 't' + 256));
	printf("mine: %s\n", ft_strchr(s, 't' + 256));
	*/

	/*char i = 1024;
	printf("%d\n", (char)1024);
	printf("%c\n", i);
	char s[] = "teste";
	char *p_s = strchr(s, 1024);
	if (s == *p_s)
		puts("Gotcha");
	printf("s_addr: %p\np_s_addr: %p\n", &s[strlen(s)], p_s);
	printf("original: %s\n", p_s);
	*/
	printf("original: %p\n", strchr("teste", 1024));
	printf("mine: %p\n", ft_strchr("teste", 1024));
}
