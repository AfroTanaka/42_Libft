#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define ARG1 "lorem ipsum dolor sit amet"
#define ARG2 "dolor"
#define ARG3 0

int main()
{	
	/*char *s1 = "AAAAAAAAAAAAA";
 	size_t max = strlen(s1);
 	char *i1 = strnstr(s1, s1, max);
 	char *i2 = ft_strnstr(s1, s1, max);
	printf("original: %s\nmine: %s\n", i1, i2);
	if (i1 == i2)
		puts("Got it");
	else
		puts("fxxxxxx");
	*/

	//printf("original: %s\nmine: %s\n", strnstr(ARG1, ARG2, ARG3), ft_strnstr(ARG1, ARG2, ARG3));
	
	//char haystack[30] = "aaabcabcd";
	//char haystack[30] = "aab";
	//char needle[10] = "aabc";
	//char *empty = (char*)"";
	//printf("original: %s\nmine: %s\n", strnstr(empty, "coucou", -1), ft_strnstr(empty, "coucou", -1));
	//printf("original: %s\nmine: %s\n", strnstr(empty, "coucou", 3), ft_strnstr(empty, "coucou", 3));
	//printf("original: %s\nmine: %s\n", strnstr(haystack, "coucou", -1), ft_strnstr(haystack, "coucou", -1));
	
	//puts("");
	//printf("original: %s\nmine: %s\n", strnstr(haystack, "abcd", 9), ft_strnstr(haystack, "abcd", 9));
	//printf("original: %s\nmine: %s\n", strnstr(haystack, "ab", 3), ft_strnstr(haystack, "ab", 3));

	/*char *s1 = "MZIRIBMZIRIBMZE123";
 	char *s2 = "MZIRIBMZE";
 	size_t max = strlen(s2);
 	char *i1 = strnstr(s1, s2, max);
 	char *i2 = ft_strnstr(s1, s2, max);	
	printf("original: %s\nmine: %s\n", i1, i2);
	*/

	/*char *s1 = "FF";
 	char *s2 = "see FF your FF return FF now FF";
	printf("s1 + 1: %p\n*s1: %c\n", s1 + 1, *(s1 + 1));
	printf("s1 + 2: %p\n*s1: %c\n", s1 + 2, *(s1 + 2));
	printf("s2: %p\n", s2);
 	char *i1 = strnstr(s1, s2, 4);
 	char *i2 = ft_strnstr(s1, s2, 4);
	printf("original: %s\nmine: %s\n", i1, i2);*/

	/*char *n = "abcdefgh";
	char *i1 = strnstr(n, "abc", 2);
	char *i2 = ft_strnstr(n, "abc", 2);
	printf("abc_addr: %p\n", n);
	printf("original: %p\nmine: %p\n\n",i1, i2 );
	printf("original: %s\nmine: %s\n\n", strnstr(n, "abc", 2), ft_strnstr(n, "abc", 2));
	printf("original: %c\nmine: %c\n",*i1, *i2 );*/

	/*printf("original: %s\n",strnstr(((void *)0), "fake", 3));
	printf("mine: %s\n",ft_strnstr(((void *)0), "fake", 3));*/

	//printf("original: %s\n",strnstr("fake", NULL, 0));
	printf("mine: %s\n",ft_strnstr("fake", NULL, 0));
}
