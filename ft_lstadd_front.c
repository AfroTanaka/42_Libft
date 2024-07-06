/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:42:54 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/06 12:57:59 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
/**
 * @brief Adds the node `new` at the beginning of the list.
 * @param (lst) The adress of a pointer to the first link of a list.
 * @param (new) The addresss of a pointer to the node to be added to the list.
 * @return (void) None
 */
{
	new->next = *lst;
	*lst = new;
}
