#include "libft_test.h"
#include <assert.h>

unsigned int TestBzero(void)
{
	// Case 1
	puts("\x1b[33mArg1 == NULL\x1b[0m");
	puts("\x1b[31mSegmentation fault\x1b[0m");
	/*bzero(NULL, 5);
	ft_bzero(NULL, 5);*/

	// Case 2
	puts("\x1b[33mArg2 == NULL\x1b[0m");
	char test1[] = "Hello";
	char test2[] = "Hello";
	char *pt_test1;
	char *pt_test2;
	pt_test1 = test1;
	pt_test2 = test2;
	bzero(test1, (size_t)NULL);
	ft_bzero(test2, (size_t)NULL);
	assert(*pt_test1 == *pt_test2);
	TEST_ASSERT(1);

	// Case 3
	puts("\x1b[33mArg2 == Zero\x1b[0m");
	puts("\x1b[31marg2 is zero\x1b[0m");
	/*char test3[] = "Hello";
	char test4[] = "World";	
	char *pt_test3;
	char *pt_test4;
	pt_test3 = test3;
	pt_test4 = test4;
	bzero(test3, 0);
	ft_bzero(test4, 0);
	assert(*pt_test3 != *pt_test4);
	TEST_ASSERT(1);*/

	// Case 4
	puts("\x1b[33mArg2 is negative\x1b[0m");
	puts("\x1b[31mIt's always overflow\x1b[0m");
	/*char test5[] = "Hello";
	char test6[] = "Hello";	
	char *pt_test5;
	char *pt_test6;
	pt_test5 = test5;
	pt_test6 = test6;
	bzero(test5, -4);
	ft_bzero(test6, -4);
	assert(*pt_test5 == *pt_test6);
	TEST_ASSERT(1);*/

	// Case 5
	puts("\x1b[33mWrite five bytes to a string\x1b[0m");
	char test7[] = "HelloWorld";
	char test8[] = "HelloWorld";	
	bzero(test7, 5);
	ft_bzero(test8, 5);
	for (int i = 0; i < (int)sizeof(test7); i++)
		assert(test7[i] == test8[i]);
	TEST_ASSERT(1);

	// Case 6
	puts("\x1b[33msizeof(arg1) < arg2\x1b[0m");
	puts("\x1b[31mIt's always overflow\x1b[0m");
	/*char test9[] = "Hello";
	char test10[] = "Hello";	
	bzero(test9, 10);
	ft_bzero(test10, 10);
	for (int i = 0; i < sizeof(test9); i++)
		assert(test9[i] == test10[i]);
	TEST_ASSERT(1);*/

	// Case 7
	puts("\x1b[33mA null character in the middle of string\x1b[0m");
	char test11[] = "Hello\0World";
	char test12[] = "Hello\0World";	
	bzero(test11, 8);
	ft_bzero(test12, 8);
	for (int i = 0; i < (int)sizeof(test11); i++)
		assert(test11[i] == test12[i]);
	TEST_ASSERT(1);
	
	return 0;
}
