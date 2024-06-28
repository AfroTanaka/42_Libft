#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main()
{
	char s[] = "Hello";
	//char c = 'A';
	//printf("%d\n", -1 % 10);
	errno = 0;
	int ret = write(1,s, -1);
	printf("ret: %d\n", ret);
	printf("%s\n", strerror(errno));
	//ft_putstr_fd("", 1);
}
