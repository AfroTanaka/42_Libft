/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:22:28 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/09 11:26:40 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
/**
 * @brief
 * @param (lst)
 * @param (f)
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
