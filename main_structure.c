#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int main()
{
	t_list *new;

	new = ft_lstnew("Hello");
	printf("%s\n", new->content);
//	printf("%p\n", &new);
	free(new);
	new = NULL;
}
