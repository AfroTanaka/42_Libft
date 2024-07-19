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
	printf("'t' + 256: %c\n", 372);
	printf("original: %s\nmin: %s\n",strrchr(s, 't' + 256), ft_strrchr(s, 't' + 256));
	*/

	/*int c = 372;
	for (int i = 31; i >= 0; i--)
	{
		if ((i + 1) % 8 == 0)
			printf(" ");
		printf("%d", (c >> i) & 1);
	}
	puts("");*/

	/*char s[] = "";
	printf("%lu\n", strlen(s));
	*/

	/*char str2[] = "bonjour";
	printf("strlen: %lu\nsizeof: %lu\n", strlen(str2), sizeof(str2));
	char *p_original = strrchr(str2, '\0');
	char *p_mine = ft_strrchr(str2, '\0');
	printf("str2[strlen(str2)]: %p\n", str2 + strlen(str2));
	printf("original: %p\nmin: %p\n",p_original, p_mine);
	printf("original: %s\nmin: %s\n",strrchr(str2, '\0'), ft_strrchr(str2, '\0'));
	*/
	
	
	/*char str3[] = "bonjourno";
	printf("strlen: %lu\nsizeof: %lu\n", strlen(str3), sizeof(str3));
	char *p_original = strrchr(str3, 'o');
	char *p_mine = ft_strrchr(str3, 'o');
	printf("original: %p\nmin: %p\n",p_original, p_mine);
	printf("original: %s\nmin: %s\n",p_original, p_mine);*/
	//printf("original: %s\n",strrchr("Hello", 0));
	printf("mine: %s\n",ft_strrchr("Hello", 0));
}
