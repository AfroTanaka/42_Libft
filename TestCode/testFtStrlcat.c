#include "libft_test.h"

unsigned int TestStrlcat(void)
{
	// Case 1
	/*puts("\x1b[31mStandard Case: (20 - \"Hello\", World, sizeof(arg1) - 20\x1b[0m");
	char s[20] = "Hello";
	char t[] = "World";
	size_t ret = strlcat(s, t, sizeof(s));
	printf("ret: %zu\n", ret);
	printf("Contents: %s\nContents Size: %lu\n", s, sizeof(s));*/

	// Case 2
	/*puts("\x1b[31mStandard Case: (6 - \"Hello\", World, sizeof(arg1) - 6\x1b[0m");
	char s[6] = "Hello";
	char t[] = "World";
	size_t ret = strlcat(s, t, sizeof(s));
	printf("ret: %zu\n", ret);
	printf("Contents: %s\nContents Size: %lu\n", s, sizeof(s));*/

	// Case 3
	/*puts("\x1b[31mStandard Case: (10 - \"Hello\", World, sizeof(arg1) - 10\x1b[0m");
	char s[10] = "Hello";
	char t[] = "World";
	size_t ret = strlcat(s, t, sizeof(s));
	printf("ret: %zu\n", ret);
	printf("Contents: %s\nContents Size: %lu\n", s, sizeof(s));*/

	// Case 4
	puts("\x1b[31mStandard Case: (10 - \"Hello\", abcdefghijklmn, 20\x1b[0m");
	char s[10] = "Hello";
	char t[] = "abcdefghijklmn";
	size_t ret = strlcat(s, NULL, sizeof(s));
	printf("ret: %zu\n", ret);
	printf("Contents: %s\nContents Size: %lu\n", s, sizeof(s));


	return 0;
}
