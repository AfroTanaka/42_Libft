#include <stdio.h>
#include "libft.h"

int main()
{
	/*char s1[] = "lorem ipsum dolor sit amet";
	puts("\x1b[31mExpected...\x1b[0m");
	puts("lorem ipsum dolor sit am");
	puts("\x1b[31mMy result...\x1b[0m");
	printf("%s\n", ft_strtrim(s1, "te"));*/
	
	//char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	/*char s1[] = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	puts("\x1b[31mExpected...\x1b[0m");
	puts(s2);
	puts("\x1b[31mMy result...\x1b[0m");
	printf("%s\n", ft_strtrim(s1, " \n\t"));*/

	char s1[] = "ABC";
	puts("\x1b[31mExpected...\x1b[0m");
	puts("");
	puts("\x1b[31mMy result...\x1b[0m");
	printf("%s\n", ft_strtrim(s1, "ABC"));
}
