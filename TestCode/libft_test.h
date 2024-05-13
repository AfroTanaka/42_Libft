#ifndef _LIBFT_TEST_H
#define _LIBFT_TEST_H


#include "../TestRunner/testRunner.h"
#include "../libft.h"

#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>

// Test ft_isalpha()
unsigned int TestIsalpha(void);

// Test ft_isdigit()
unsigned int TestIsdigit(void);

// Test ft_isalnum()
unsigned int TestIsalnum(void);

// Test ft_isascii()
unsigned int TestIsascii(void);

// Test ft_isprint()
unsigned int TestIsprint(void);

// Test ft_strlen()
unsigned int TestStrlen(void);

// Test ft_memset()
unsigned int TestMemset(void);

// Test ft_bzero()
unsigned int TestBzero(void);
#endif
