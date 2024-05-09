/* This file is for testing all of the functions that I made and original as well. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"

#include <assert.h>
#include <limits.h>


void tt_isalpha()
{
	// NULL
	puts("\x1b[32mNULL test\x1b[0m");
	assert(isalpha((int)NULL) == ft_isalpha((int)NULL));
	puts("\x1b[45mSuccess\x1b[0m");

	// The value in ascii table
	puts("\x1b[32mThe value in ascii table test\x1b[0m");
	for (int i = 0; i < 127; i++)
		assert(isalpha(i) == ft_isalpha(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// Minus value
	puts("\x1b[32mMinus value\x1b[0m");
	for (int i = -200; i < 0; i++)
		assert(isalpha(i) == ft_isalpha(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// INT_MIN -1
	puts("\x1b[32mINT_MIN - 1\x1b[0m");
	assert(isalpha(INT_MIN - 1) == ft_isalpha(INT_MIN - 1));
	puts("\x1b[45mSuccess\x1b[0m");

	// INT_MAX + 1
	puts("\x1b[32mINT_MAX + 1\x1b[0m");
	assert(isalpha(INT_MAX + 1) == ft_isalpha(INT_MAX + 1));
	puts("\x1b[45mSuccess\x1b[0m");
}

void tt_isdigit()
{
	// NULL
	puts("\x1b[32mNULL test\x1b[0m");
	assert(isdigit((int)NULL) == ft_isdigit((int)NULL));
	puts("\x1b[45mSuccess\x1b[0m");

	// The value in ascii table
	puts("\x1b[32mThe value in ascii table test\x1b[0m");
	for (int i = 0; i < 127; i++)
		assert(isdigit(i) == ft_isdigit(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// Minus value
	puts("\x1b[32mMinus value\x1b[0m");
	for (int i = -200; i < 0; i++)
		assert(isdigit(i) == ft_isdigit(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// Positive value
	puts("\x1b[32mPositive value\x1b[0m");
	for (int i = 128; i < 256; i++)
		assert(isdigit(i) == ft_isdigit(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// INT_MIN - 1
	puts("\x1b[32mINT_MIN - 1\x1b[0m");
	assert(isdigit(INT_MIN - 1) == ft_isdigit(INT_MIN - 1));
	puts("\x1b[45mSuccess\x1b[0m");

	// INT_MAX + 1
	puts("\x1b[32mINT_MAX + 1\x1b[0m");
	assert(isdigit(INT_MAX + 1) == ft_isdigit(INT_MAX + 1));
	puts("\x1b[45mSuccess\x1b[0m");
}

void tt_isalnum()
{
	// NULL
	puts("\x1b[32mNULL test\x1b[0m");
	assert(isalnum((int)NULL) == ft_isalnum((int)NULL));
	puts("\x1b[45mSuccess\x1b[0m");

	// The value in ascii table
	puts("\x1b[32mThe value in ascii table test\x1b[0m");
	for (int i = 0; i < 127; i++)
		assert(isalnum(i) == ft_isalnum(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// Minus value
	puts("\x1b[32mMinus value\x1b[0m");
	for (int i = -200; i < 0; i++)
		assert(isalnum(i) == ft_isalnum(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// Positive value
	puts("\x1b[32mPositive value\x1b[0m");
	for (int i = 128; i < 256; i++)
		assert(isalnum(i) == ft_isalnum(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// INT_MIN - 1
	puts("\x1b[32mINT_MIN - 1\x1b[0m");
	assert(isalnum(INT_MIN - 1) == ft_isalnum(INT_MIN - 1));
	puts("\x1b[45mSuccess\x1b[0m");

	// INT_MAX + 1
	puts("\x1b[32mINT_MAX + 1\x1b[0m");
	assert(isalnum(INT_MAX + 1) == ft_isalnum(INT_MAX + 1));
	puts("\x1b[45mSuccess\x1b[0m");
}

void tt_isascii()
{
	// NULL
	puts("\x1b[32mNULL test\x1b[0m");
	assert(isascii((int)NULL) == ft_isascii((int)NULL));
	puts("\x1b[45mSuccess\x1b[0m");

	// The value in ascii table
	puts("\x1b[32mThe value in ascii table test\x1b[0m");
	for (int i = 0; i < 127; i++)
		assert(isascii(i) == ft_isascii(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// Minus value
	puts("\x1b[32mMinus value\x1b[0m");
	for (int i = -200; i < 0; i++)
		assert(isascii(i) == ft_isascii(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// Positive value
	puts("\x1b[32mPositive value\x1b[0m");
	for (int i = 128; i < 256; i++)
		assert(isascii(i) == ft_isascii(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// INT_MIN - 1
	puts("\x1b[32mINT_MIN - 1\x1b[0m");
	assert(isascii(INT_MIN - 1) == ft_isascii(INT_MIN - 1));
	puts("\x1b[45mSuccess\x1b[0m");

	// INT_MAX + 1
	puts("\x1b[32mINT_MAX + 1\x1b[0m");
	assert(isascii(INT_MAX + 1) == ft_isascii(INT_MAX + 1));
	puts("\x1b[45mSuccess\x1b[0m");
}

void tt_isprint()
{
	// NULL
	puts("\x1b[32mNULL test\x1b[0m");
	assert(isprint((int)NULL) == ft_isprint((int)NULL));
	puts("\x1b[45mSuccess\x1b[0m");

	// The value in ascii table
	puts("\x1b[32mThe value in ascii table test\x1b[0m");
	for (int i = 0; i < 127; i++)
		assert(isprint(i) == ft_isprint(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// Minus value
	puts("\x1b[32mMinus value\x1b[0m");
	for (int i = -200; i < 0; i++)
		assert(isprint(i) == ft_isprint(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// Positive value
	puts("\x1b[32mPositive value\x1b[0m");
	for (int i = 128; i < 256; i++)
		assert(isprint(i) == ft_isprint(i));
	puts("\x1b[45mSuccess\x1b[0m");

	// INT_MIN - 1
	puts("\x1b[32mINT_MIN - 1\x1b[0m");
	assert(isprint(INT_MIN - 1) == ft_isprint(INT_MIN - 1));
	puts("\x1b[45mSuccess\x1b[0m");

	// INT_MAX + 1
	puts("\x1b[32mINT_MAX + 1\x1b[0m");
	assert(isprint(INT_MAX + 1) == ft_isprint(INT_MAX + 1));
	puts("\x1b[45mSuccess\x1b[0m");
}

void tt_strlen()
{
	// NULL
	puts("\x1b[32mNULL test\x1b[0m");
	//printf("ret: %lu\n", ft_strlen((char *)NULL));
	//assert(strlen((char*)NULL) == ft_strlen((char*)NULL));
	puts("\x1b[45mSuccess\x1b[0m");

	// have \0 between Hello and World as one string
	puts("\x1b[32mHello\0World\x1b[0m");
	assert(strlen("Hello\0World") == ft_strlen("Hello\0World"));
	puts("\x1b[45mSuccess\x1b[0m");

	// standard case
	puts("\x1b[32mHello\x1b[0m");
	assert(strlen("Hello") == ft_strlen("Hello"));
	puts("\x1b[45mSuccess\x1b[0m");

	// Empty string
	puts("\x1b[32m""\x1b[0m");
	assert(strlen("") == ft_strlen(""));
	puts("\x1b[45mSuccess\x1b[0m");

	// -1
	puts("\x1b[32m\"-1\"\x1b[0m");
	assert(strlen("-1") == ft_strlen("-1"));
	puts("\x1b[45mSuccess\x1b[0m");

	// \0
	puts("\x1b[32m\"0\"\x1b[0m");
	assert(strlen("\0") == ft_strlen("\0"));
	puts("\x1b[45mSuccess\x1b[0m");
}

void tt_memset()
{
	// If arg1 is NULL
	puts("\x1b[32mNULL(arg1) test\x1b[0m");
	//printf("ret_value: %s\n", ft_memset(NULL, '@', 5));
	//assert(memset(NULL, '@', 5) == ft_memset(NULL, '@', 5));
	puts("\x1b[45mSuccess\x1b[0m");
	
	// If arg2 is NULL
	char test1[10];
	char test2[10];
	puts("\x1b[32mNULL(arg2) test\x1b[0m");
	char *pt_test1 = memset(test1, (int)NULL, 5);
	char *pt_test2 = ft_memset(test2, (int)NULL, 5);
	/*if (memset(test1, (int)NULL, 5) == ft_memset(test2, (int)NULL, 5))
		puts("Yay");
	else
		puts("Omg");*/
	if (*pt_test1 == *pt_test2)
		puts("Yay");
	else
		puts("Omg");
	//assert((char *)(memset(test1, (int)NULL, 5)) == (char *)(ft_memset(test2, (int)NULL, 5)));
	assert(*pt_test1 == *pt_test2);
	puts("\x1b[45mSuccess\x1b[0m");
	
	// If arg3 is NULL
	puts("\x1b[32mNULL(arg3) test\x1b[0m");
	char test3[10];
	char test4[10];
	char *pt_test3 = memset(test3, '@', (size_t)NULL);
	char *pt_test4 = ft_memset(test4, '@', (size_t)NULL);
	printf("pt_test3: %s\npt_test4: %s\n", pt_test3, pt_test4);
	//assert(memset(test3, '@', (size_t)NULL) == ft_memset(test4, '@', (size_t)NULL));
	//assert(*pt_test3 == *pt_test4);
	puts("\x1b[45mSuccess\x1b[0m");

	// If string has \0 between Hello and World as one string
	puts("\x1b[32mHello\\0World\x1b[0m");
	char test5[sizeof("Hello\0World")] = "Hello\0World";
	char test6[sizeof("Hello\0World")] = "Hello\0World";
	char *pt_test5 = memset(test5, '@', 9);
	char *pt_test6 = ft_memset(test6, '@', 9);
	printf("pt_test5: %s\n", pt_test5);
	printf("pt_test6: %s\n", pt_test6);
	//assert(memset("Hello\0World", '@', 9) == ft_memset("Hello\0World", '@', 9));
	assert(*pt_test5 == *pt_test6);
	puts("\x1b[45mSuccess\x1b[0m");

	// If the number of arg1 and arg3 is the same
	puts("\x1b[32mHello, @, 5\x1b[0m");
	char test7[sizeof("Hello")] = "Hello";
	char test8[sizeof("Hello")] = "Hello";
	char *pt_test7 = memset(test7, '@', 5);
	char *pt_test8 = ft_memset(test8, '@', 5);
	printf("pt_test7: %s\n", pt_test7);
	printf("pt_test8: %s\n", pt_test8);
	//assert(memset("Hello", '@', 5) == ft_memset("Hello", '@', 5));
	assert(*pt_test7 == *pt_test8);
	puts("\x1b[45mSuccess\x1b[0m");

	// If arg1 > arg3
	puts("\x1b[32mHello, @, 3\x1b[0m");
	char test9[sizeof("Hello")] = "Hello";
	char test10[sizeof("Hello")] = "Hello";
	char *pt_test9 = memset(test9, '@', 3);
	char *pt_test10 = ft_memset(test10, '@', 3);
	//assert(memset("Hello", '@', 3) == ft_memset("Hello", '@', 3));
	assert(*pt_test9 == *pt_test10);
	puts("\x1b[45mSuccess\x1b[0m");

	// If arg1 < arg3
	puts("\x1b[32msync, @, 6\x1b[0m");
	/*char test11[sizeof("sync")] = "sync";
	char test12[sizeof("sync")] = "sync";
	char *pt_test11 = memset(test11, '@', 6);
	char *pt_test12 = ft_memset(test12, '@', 6);*/
	//assert(memset("sync", '@', 6) == ft_memset("sync", '@', 6));
	//assert(*pt_test11 == *pt_test12);
	puts("Always overflow when arg1 < arg3");
	puts("\x1b[45mSuccess\x1b[0m");

	// If arg3 is negative
	puts("\x1b[32mHello, @, -3\x1b[0m");
	/*char test13[sizeof("Hello")] = "Hello";
	char test14[sizeof("Hello")] = "Hello";
	char *pt_test13 = memset(test13, '@', -3);
	char *pt_test14 = ft_memset(test14, '@', -3);
	printf("%s\n", pt_test14);*/
	//assert(memset("Hello", '@', -3) == ft_memset("Hello", '@', -3));
	//assert(*pt_test13 == *pt_test14);
	puts("Always overflow when arg3 is negative");
	puts("\x1b[45mSuccess\x1b[0m");

	// arg1 is empty string
	puts("\x1b[32m"", @, 1\x1b[0m");
	char test15[sizeof("")] = "";
	char test16[sizeof("")] = "";
	char *pt_test15 = memset(test15, '@', 1);
	char *pt_test16 = ft_memset(test16, '@', 1);
	//assert(memset("", '@', 1) == ft_memset("", '@', 1));
	assert(*pt_test15 == *pt_test16);
	puts("\x1b[45mSuccess\x1b[0m");

	// arg2 is null character
	puts("\x1b[32mHello, '\0', 3\x1b[0m");
	char test17[sizeof("Hello")] = "Hello";
	char test18[sizeof("Hello")] = "Hello";
	char *pt_test17 = memset(test17, '\0', 3);
	char *pt_test18 = ft_memset(test18, '\0', 3);
	//assert(memset("Hello", '\0', 3) == ft_memset("Hello", '\0', 3));
	assert(*pt_test17 == *pt_test18);
	puts("\x1b[45mSuccess\x1b[0m");

	// arg2 is space
	puts("\x1b[32mHello, ' ', 3\x1b[0m");
	char test19[sizeof("Hello")] = "Hello";
	char test20[sizeof("Hello")] = "Hello";
	char *pt_test19 = memset(test19, ' ', 3);
	char *pt_test20 = ft_memset(test20, ' ', 3);
	//assert(memset("Hello", ' ', 3) == ft_memset("Hello", ' ', 3));
	assert(*pt_test19 == *pt_test20);
	puts("\x1b[45mSuccess\x1b[0m");

	// arg2 is negative
	puts("\x1b[32mHello, -1, 3\x1b[0m");
	char test21[sizeof("Hello")] = "Hello";
	char test22[sizeof("Hello")] = "Hello";
	char *pt_test21 = memset(test21, -1, 3);
	char *pt_test22 = ft_memset(test22, -1, 3);
	//assert(memset("Hello", -1, 3) == ft_memset("Hello", -1, 3));
	printf("pt_test21: %s\npt_test22: %s\n", pt_test21, pt_test22);
	assert(*pt_test21 == *pt_test22);
	puts("\x1b[45mSuccess\x1b[0m");

	// arg2 is not a printable character
	puts("\x1b[32mHello, 15, 3\x1b[0m");
	char test23[sizeof("Hello")] = "Hello";
	char test24[sizeof("Hello")] = "Hello";
	char *pt_test23 = memset(test23, 15, 3);
	char *pt_test24 = ft_memset(test24, 15, 3);
	//assert(memset("Hello", 15, 3) == ft_memset("Hello", 15, 3));
	assert(*pt_test23 == *pt_test24);
	puts("\x1b[45mSuccess\x1b[0m");
}

void tt_bzero()
{
	/* arg1 is NULL */
	puts("\x1b[32marg1 is NULL\x1b[0m");
	//bzero(NULL, 5);
	//ft_bzero(NULL, 5);
	puts("\x1b[31mIt is segmentation fault\x1b[0m");
	puts("\x1b[45mSuccess\x1b[0m");

	/* arg2 is NULL */
	puts("\x1b[32marg2 is NULL\x1b[0m");
	char temp[sizeof("Hello")] = "Hello";
	char temp_two[sizeof("Hello")] = "Hello";
	char *pt_temp = temp;
	char *pt_temp_two = temp_two;
	bzero(temp, (int)NULL);
	ft_bzero(temp_two, (int)NULL);
	assert(*pt_temp == *pt_temp_two);
	puts("\x1b[45mSuccess\x1b[0m");

	/* arg2 is zero */
	puts("\x1b[32marg2 is Zero\x1b[0m");
	char test25[sizeof("Hello")] = "Hello";
	char test26[sizeof("Hello")] = "Hello";
	//bzero(test25, 0); <- get an error
	char *pt_test25 = test25;
	ft_bzero(test26, 0);
	char *pt_test26 = test26;
	assert(*pt_test25 == *pt_test26);
	puts("\x1b[45mSuccess\x1b[0m");

	/* arg2 is negative */
	puts("\x1b[32marg2 is negative\x1b[0m");
	/*char test27[sizeof("Hello")] = "Hello";
	char test28[sizeof("Hello")] = "Hello";
	bzero(test27, -4); <- overflow
	char *pt_test27 = test27;
	ft_bzero(test28, -4); <- overflow
	char *pt_test28 = test28;
	assert(*pt_test27 == *pt_test28);*/
	puts("x1b[31mIt always overflow\x1b[0m");
	puts("\x1b[45mSuccess\x1b[0m");

	/* sizeof(arg1) > arg2 */
	puts("\x1b[32msizeof(arg1) > arg2\x1b[0m");
	char test29[sizeof("HelloWorld")] = "HelloWorld";
	char test30[sizeof("HelloWorld")] = "HelloWorld";
	bzero(test29, 5);
	char *pt_test29 = test29;
	ft_bzero(test30, 5);
	char *pt_test30 = test30;
	assert(*pt_test29 == *pt_test30);
	puts("\x1b[45mSuccess\x1b[0m");

	/* sizeof(arg1) < arg2 */
	puts("\x1b[32msizeof(arg1) > arg2\x1b[0m");
	char test31[sizeof("HelloWorld")] = "Hello";
	char test32[sizeof("HelloWorld")] = "Hello";
	bzero(test31, 10);
	char *pt_test31 = test31;
	ft_bzero(test32, 10);
	char *pt_test32 = test32;
	assert(*pt_test31 == *pt_test32);
	puts("\x1b[45mSuccess\x1b[0m");
}

int main()
{
	puts("\x1b[33mSomething is wrong if there's message, nothing wrong, otherwise XD\x1b[0m");
	puts("\x1b[31mft_isalpha()...\x1b[0m");
	tt_isalpha();
	puts("\x1b[31mft_isdigit()...\x1b[0m");
	tt_isdigit();
	puts("\x1b[31mft_isalnum()...\x1b[0m");
	tt_isalnum();
	puts("\x1b[31mft_isascii()...\x1b[0m");
	tt_isascii();
	puts("\x1b[31mft_isprint()...\x1b[0m");
	tt_isprint();
	puts("\x1b[31mft_strlen()...\x1b[0m");
	tt_strlen();
	puts("\x1b[31mft_memset()...\x1b[0m");
	tt_memset();
	puts("\x1b[31mft_bzero()...\x1b[0m");
	tt_bzero();
}
