#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	t_list	*tmp;
	int i;

	i = 42;
	tmp = ft_lstnew(&i);
	printf("%d\n", *(int*)tmp->content);
	if (tmp->next == NULL)
		puts("NULL");
	free(tmp->content);
	free(tmp);
}
