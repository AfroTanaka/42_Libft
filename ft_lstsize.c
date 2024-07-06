/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:16:31 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/06 11:46:30 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
/**
 * @brief Counts the number of nodes in a list.
 * @param (lst) The beginning of the list
 * @return (int) The length of the list
 */
{
	t_list	*tmp;
	int		count;

	if (!lst)
		return (0);
	tmp = lst;
	count = 1;
	while (tmp->next != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
