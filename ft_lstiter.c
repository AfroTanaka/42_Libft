/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:22:28 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/09 11:30:35 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
/**
 * @brief Iterates the list `lst` and applies the function `f` on the content of each node.
 * @param (lst) The address of a pointer to a node.
 * @param (f) The address of the function used to iterate on the list.
 * @return (void) None
 */
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst->next;
	}
}
