/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:16:31 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/19 16:30:13 by mmiura           ###   ########.fr       */
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
	int		count;

	if (lst == NULL)
		return (0);
	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
