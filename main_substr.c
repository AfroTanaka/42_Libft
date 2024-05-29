#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s = ft_substr("tripouille", 0, 42000);
	if (ft_strlen(s) != ft_strlen("tripouille"))
		puts("Something wrong");
	else
		puts("Same length!");
	free(s);
	s = NULL;
}
