#include "libft_test.h"

unsigned int TestIsalpha(void)
{
	// Case 1
	puts("\x1b[33m(int)NULL\x1b[0m");
	TEST_ASSERT_EQUALS(isalpha((int)NULL), ft_isalpha((int)NULL));

	// Case 2
	puts("\x1b[33m0 <= arg <= 127\x1b[0m");
	for (int i = 0; i < 128; i++)
		TEST_ASSERT_EQUALS(isalpha(i), ft_isalpha(i));

	// Case 3
	puts("\x1b[33mNegative value\x1b[0m");
	for (int i = -10; i < 0; i++)
		TEST_ASSERT_EQUALS(isalpha(i), ft_isalpha(i));

	// Case 4
	puts("\x1b[33mPositive value && out of range of ascii table\x1b[0m");
	for (int i = 127; i < 225; i++)
		TEST_ASSERT_EQUALS(isalpha(i), ft_isalpha(i));

	// Case 5
	puts("\x1b[33mINT_MIN\x1b[0m");
	TEST_ASSERT_EQUALS(isalpha(INT_MIN), ft_isalpha(INT_MIN));

	// Case 6
	puts("\x1b[33mINT_MAX\x1b[0m");
	TEST_ASSERT_EQUALS(isalpha(INT_MAX), ft_isalpha(INT_MAX));

	// Case 7
	/*puts("\x1b[33mINT_MIN - 1\x1b[0m");
	TEST_ASSERT_EQUALS(isalpha(INT_MIN - 1), ft_isalpha(INT_MIN - 1));

	// Case 8
	puts("\x1b[33mINT_MAX + 1\x1b[0m");
	TEST_ASSERT_EQUALS(isalpha(INT_MAX + 1), ft_isalpha(INT_MAX + 1));
	*/

	return 0;
}
