#include "libft_test.h"
#include "../TestRunner/testRunner.h"
#include "../libft.h"

#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int main()
{
	// ft_isalpha Test
	puts("\x1b[31mft_isalpha\x1b[0m");
	if (!((int) testRunner(TestIsalpha)))
		puts("\x1b[36mSuccess\x1b[0m\n");

	// ft_isdigit Test
	puts("\x1b[31mft_isalpha\x1b[0m");
	if (!((int) testRunner(TestIsdigit)))
		puts("\x1b[36mSuccess\x1b[0m\n");

	// ft_isalnum Test
	puts("\x1b[31mft_isalnum\x1b[0m");
	if (!((int) testRunner(TestIsalnum)))
		puts("\x1b[36mSuccess\x1b[0m\n");
}
