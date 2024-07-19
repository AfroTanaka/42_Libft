/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:45:01 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/15 13:25:26 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
/**
 * @brief Iterates the list `lst` and applies the function `f` on the content of each node. Creates a new list resulting of the successive applications of the function `f`. The `del` function is used to delete the content of a node if needed.
 * @param (lst) The address of a pointer to a node.
 * @param (f) The address of the function used to iterate on the list.
 * @param (del) The address of the function used to delete the content of a node if needed.
 * @return (t_list *) Returns the new list. NULL if the allocation fails.
 */
{
	t_list	*start;
	t_list	*tmp;
	void	*f_res;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	start = NULL;
	tmp = NULL;
	while (lst != NULL)
	{
		f_res = f(lst->content);
		tmp = ft_lstnew(f_res);
		if (tmp == NULL)
		{
			free(f_res);
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, tmp);
		lst = lst->next;
	}
	return (start);
}
