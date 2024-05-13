#include "libft_test.h"
#include <assert.h>

unsigned int TestMemset(void)
{
	// Case 1
	/*char test1[] = NULL;
	char test2[] = NULL;
	char *ret_test1;
	char *ret_test2;*/
	puts("\x1b[33mArg1 == NULL\x1b[0m");
	puts("\x1b[31mSegmentation fault\x1b[0m");
	/*ret_test1 = memset(NULL, '@', 5);
	ret_test2 = ft_memset(NULL, '@', 5);
	assert(*ret_test1 == *ret_test2);
	TEST_ASSERT(1);*/

	// Case 2
	char test3[10];
	char test4[10];
	char *ret_test3;
	char *ret_test4;
	puts("\x1b[33mArg2 == (int)NULL\x1b[0m");
	ret_test3 = memset(test3, (int)NULL, 5);
	ret_test4 = ft_memset(test4, (int)NULL, 5);
	assert(*ret_test3 == *ret_test4);
	TEST_ASSERT(1);

	// Case 3
	/*char test5[10];
	char test6[10];
	char *ret_test5;
	char *ret_test6;*/
	puts("\x1b[33mArg3 == (unsigned long)NULL\x1b[0m");
	puts("\x1b[31mIf arg3 is NULL that means insert 0 to arg1.\x1b[0m");
	/*ret_test5 = memset(test5, '@', (unsigned long)NULL);
	ret_test6 = ft_memset(test6, '@', (unsigned long)NULL);
	assert(*ret_test5 == *ret_test6);
	TEST_ASSERT(1);*/

	// Case 4
	char test7[] = "Hello\0World";
	char test8[] = "Hello\0World";
	char *ret_test7;
	char *ret_test8;
	puts("\x1b[33mArg1 has a null character in the middle of string\x1b[0m");
	ret_test7 = memset(test7, '@', 9);
	ret_test8 = ft_memset(test8, '@', 9);
	assert(*ret_test7 == *ret_test8);
	TEST_ASSERT(1);

	// Case 5
	char test9[] = "Hello";
	char test10[] = "Hello";
	char *ret_test9;
	char *ret_test10;
	puts("\x1b[33mStandard Case: \"Hello\", '@', sizeof(\"Hello\") - 1\x1b[0m");
	ret_test9 = memset(test9, '@', sizeof("Hello") - 1);
	ret_test10 = ft_memset(test10, '@', sizeof("Hello") - 1);
	assert(*ret_test9 == *ret_test10);
	TEST_ASSERT(1);

	// Case 6
	char test11[] = "Hello";
	char test12[] = "Hello";
	char *ret_test11;
	char *ret_test12;
	puts("\x1b[33mStandard Case: \"Hello\", '@', 3\x1b[0m");
	ret_test11 = memset(test11, '@', 3);
	ret_test12 = ft_memset(test12, '@', 3);
	assert(*ret_test11 == *ret_test12);
	TEST_ASSERT(1);

	// Case 7
	/*char test13[] = "Hell";
	char test14[] = "Hell";
	char *ret_test13;
	char *ret_test14;*/
	puts("\x1b[33msizeof(arg1) < arg3\x1b[0m");
	puts("\x1b[31mIt always overflow\x1b[0m");
	/*ret_test13 = memset(test13, '@', 6);
	ret_test14 = ft_memset(test14, '@', 6);
	assert(*ret_test13 == *ret_test14);
	TEST_ASSERT(1);*/

	// Case 8
	/*char test15[] = "Hello";
	char test16[] = "Hello";
	char *ret_test15;
	char *ret_test16;*/
	puts("\x1b[33mArg3 is negative\x1b[0m");
	puts("\x1b[31mIt always overflow\x1b[0m");
	/*ret_test15 = memset(test15, '@', -3);
	ret_test16 = ft_memset(test16, '@', -3);
	assert(*ret_test15 == *ret_test16);
	TEST_ASSERT(1);*/

	// Case 9
	char test17[] = "";
	char test18[] = "";
	char *ret_test17;
	char *ret_test18;
	puts("\x1b[33mWrite 1 byte to empty string\x1b[0m");
	ret_test17 = memset(test17, '@', 1);
	ret_test18 = ft_memset(test18, '@', 1);
	assert(*ret_test17 == *ret_test18);
	TEST_ASSERT(1);

	// Case 10
	char test19[] = "Hello";
	char test20[] = "Hello";
	char *ret_test19;
	char *ret_test20;
	puts("\x1b[33mWrite a null character to a string\x1b[0m");
	ret_test19 = memset(test19, '\0', 3);
	ret_test20 = ft_memset(test20, '\0', 3);
	assert(*ret_test19 == *ret_test20);
	TEST_ASSERT(1);

	// Case 11
	char test33[] = "Hello";
	char test34[] = "Hello";
	char *ret_test33;
	char *ret_test34;
	puts("\x1b[33mWrite a space to a string\x1b[0m");
	ret_test33 = memset(test33, ' ', 3);
	ret_test34 = ft_memset(test34, ' ', 3);
	assert(*ret_test33 == *ret_test34);
	TEST_ASSERT(1);

	// Case 12
	char test21[] = "Hello";
	char test22[] = "Hello";
	char *ret_test21;
	char *ret_test22;
	puts("\x1b[33mWrite -1 to a string\x1b[0m");
	ret_test21 = memset(test21, -1, 3);
	ret_test22 = ft_memset(test22, -1, 3);
	assert(*ret_test21 == *ret_test22);
	TEST_ASSERT(1);

	// Case 13
	char test23[] = "Hello";
	char test24[] = "Hello";
	char *ret_test23;
	char *ret_test24;
	puts("\x1b[33mWrite a value that is in ascii table, but non-printable to a string\x1b[0m");
	ret_test23 = memset(test23, 15, 3);
	ret_test24 = ft_memset(test24, 15, 3);
	assert(*ret_test23 == *ret_test24);
	TEST_ASSERT(1);

	// Case 14
	int test25[] = {1, 2, 3, 4, 5};
	int test26[] = {1, 2, 3, 4, 5};
	char *ret_test25;
	char *ret_test26;
	puts("\x1b[33mWrite '1' to int array\x1b[0m");
	ret_test25 = memset(test25, 49, 4);
	ret_test26 = ft_memset(test26, 49, 4);
	assert(*ret_test25 == *ret_test26);
	TEST_ASSERT(1);

	// Case 15
	char test27[] = "Hello";
	char test28[] = "Hello";
	char *ret_test27;
	char *ret_test28;
	puts("\x1b[33msizeof(arg1) == arg3\x1b[0m");
	ret_test27 = memset(test27, '@', sizeof(test27));
	ret_test28 = ft_memset(test28, '@', sizeof(test28));
	assert(*ret_test27 == *ret_test28);
	TEST_ASSERT(1);

	// Case 16
	char test29[] = "Hello";
	char test30[] = "Hello";
	char *ret_test29;
	char *ret_test30;
	puts("\x1b[33mWrite 238 that is not in ascii table but it's range of sizeof(U_CHAR)\x1b[0m");
	ret_test29 = memset(test29, 238, 3);
	ret_test30 = ft_memset(test30, 238, 3);
	assert(*ret_test29 == *ret_test30);
	TEST_ASSERT(1);

	// Case 16
	/*char test31[] = "Hello";
	char test32[] = "Hello";
	char *ret_test31;
	char *ret_test32;*/
	puts("\x1b[33mWrite no character to a string\x1b[0m");
	puts("\x1b[31mEmpty character is not valid.\x1b[0m");
	/*ret_test31 = memset(test31, '', 3);
	ret_test32 = ft_memset(test32, '', 3);
	assert(*ret_test31 == *ret_test32);
	TEST_ASSERT(1);*/
	
	return 0;
}
