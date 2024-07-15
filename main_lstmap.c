#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

__attribute__((destructor))
static void destructor() {
    system("leaks -q exec");
}

void *ft_map(void *ct);
void ft_del(void *content);
void *map_length(void *s);

int main()
{
	/*t_list *elem;
	t_list *elem2;
	t_list *elem3;
	t_list *elem4;
	t_list *result;
	char *str = ft_strdup("lorem");
	char *str2 = ft_strdup("ipsum");
	char *str3 = ft_strdup("dolor");
	char *str4 = ft_strdup("sit");

	elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;

	if ((result = ft_lstmap(elem, &ft_map, &ft_del)) == NULL)
	{
		puts("NULL");
		return (0);
	}
	if (result == elem)
		printf("A new list is not returned\n");
	//printf("%s\n", result->content);
	while (result != NULL)
	{
		printf("%s\n", result->content);
		result = result->next;
	}*/
	t_list *new = ft_lstnew("hello!");
	printf("Addr of new->content: %p\n", new->content);
	t_list *res = ft_lstmap(new, map_length, ft_del);
	t_list *tmp;

	tmp = res;
	if (res == NULL)
	{
		ft_lstclear(&new, &ft_del);
		return (1);
	}
	while (res != NULL)
	{
		printf("%s\n", res->content);
		res = res->next;
	}
	puts("Catch");
	ft_lstclear(&tmp, &ft_del);
	puts("Catch");
	free(new);
	new = NULL;
	return 0;
}

void *map_length(void *s)
{
	char *str = malloc(30);
	printf("str: %p\n", str);
	if (str != NULL)
		sprintf(str, "__%lX", ft_strlen((char *)s));
	return str;
}

void *ft_map(void *ct)
{
	int i;
	void *c;
	char *pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}

void ft_del(void *content)
{
	free(content);
}
