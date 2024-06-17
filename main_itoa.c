#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *res = ft_itoa(10);

	puts(res);
	free(res);
}
