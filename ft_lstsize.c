/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:16:31 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/06 11:25:42 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
/**
 * @brief
 * @param (lst)
 * @return (int)
 */
{
	t_list	*tmp_lst;
	int		count;

	if (!lst)
		return (0);
	tmp_lst = lst;
	count = 1;
	while (tmp_lst->next != NULL)
	{
		count++;
		tmp_lst = tmp_lst->next;
	}
	return (count);
}
