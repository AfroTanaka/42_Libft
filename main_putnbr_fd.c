#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <libc.h>
#include <stdlib.h>

__attribute__((destructor))
		static void destructor() {
			system("leaks -q exec");
		}
int main()
{
	ft_putnbr_fd(0, 4);
	puts("");
}
