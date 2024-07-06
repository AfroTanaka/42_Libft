#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int main()
{
	t_list **lst;
	t_list *test;
	t_list *new;

	lst = &test;
	test = ft_lstnew("Hello");
	if (!test)
		puts("Failed 1");
	printf("(*lst)->content: %s\n", (*lst)->content);
	new = ft_lstnew("World");
	if (!test)
		puts("Failed 2");
	printf("new->content: %s\n", new->content);
	ft_lstadd_back(lst, new);
	while(*lst != NULL)
	{
		printf("%s\n", (*lst)->content);
		*lst = (*lst)->next;
	}
	printf("test: %p\n", test);
	printf("new: %p\n", new);
	free(test);
	test = NULL;
	new = NULL;
}
