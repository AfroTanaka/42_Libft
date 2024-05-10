#include "testRunner.h"
#include "libft.h"
#include "libft_test.h"

#include <stdio.h>
#include <limits.h>
#include <ctype.h>


int main()
{
	// ft_isalpha Test
	if ((int) testRunner(TestIsalpha))
		puts("\x1b[46mSuccess\x1b[0m");
}
