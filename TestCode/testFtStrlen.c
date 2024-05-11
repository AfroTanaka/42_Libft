#include "libft_test.h"

unsigned int TestStrlen(void)
{
	// Case 1
	puts("\x1b[33mNULL\x1b[0m");
	puts("Segmentation Fault");
	//printf("%zu\n", strlen(NULL));
	//printf("%zu\n", ft_strlen(NULL));
	//TEST_ASSERT_EQUALS(strlen(NULL), ft_strlen(NULL));

	// Case 2
	puts("\x1b[33mThere is a null character in the middle of string\x1b[0m");
	TEST_ASSERT_EQUALS(strlen("Hello\0World"), ft_strlen("Hello\0World"));

	// Case 3
	puts("\x1b[33mStandard case: \"Hello\"\x1b[0m");
	TEST_ASSERT_EQUALS(strlen("Hello"), ft_strlen("Hello"));

	// Case 4
	puts("\x1b[33mStandard case: \"-1\"\x1b[0m");
	TEST_ASSERT_EQUALS(strlen("-1"), ft_strlen("-1"));

	// Case 5
	puts("\x1b[33mEmpty String\x1b[0m");
	TEST_ASSERT_EQUALS(strlen(""), ft_strlen(""));

	// Case 6
	puts("\x1b[33mA null character\x1b[0m");
	TEST_ASSERT_EQUALS(strlen("\0"), ft_strlen("\0"));

	// Case 7
	//char s[ULONG_MAX] = {'\0'};
	puts("\x1b[33mThe size index is SIZE_T_MAX(u long) in this environment.\x1b[0m");
	puts("It's too large elements");
	//TEST_ASSERT_EQUALS(strlen(s), ft_strlen(s));

	// Case 8
	//char t[ULONG_MAX + 1] = {0};
	puts("\x1b[33mThe size index is SIZE_T_MAX(u long) + 1 in this evnvironment.\x1b[0m");
	puts("Excess elements in array initializer");
	//TEST_ASSERT_EQUALS(strlen(t), ft_strlen(t));

	// Case 9
	//char u[0] = {'\0'};
	puts("\x1b[33mThe size index is SIZE_T_MIN(u long) which is zero in this environment.\x1b[0m");
	puts("Excess elements in array initializer");
	//TEST_ASSERT_EQUALS(strlen(u), ft_strlen(u));

	// Case 10
	//char v[0 - 1] = {'\0'};
	puts("\x1b[33mThe size index is SIZE_T_MIN(u long) - 1 which is zero in this environment.\x1b[0m");
	puts("Index is negative");
	//TEST_ASSERT_EQUALS(strlen(v), ft_strlen(v));
	
	return 0;
}
