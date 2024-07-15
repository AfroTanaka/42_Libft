/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:45:01 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/15 12:52:11 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
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
