/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:08:16 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/09 11:17:30 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
/**
 * @brief Deletes and frees the given node and every sucdessor of that node, using the fuction `del` and free (3). Finally, the pointer to the list must be set to NULL.
 * @param (lst) The address of a pointer to a node
 * @param (del) The address of the function used to delete the content of the node.
 * @return (void) None
 */
{
	t_list	*tmp_free;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp_free = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(tmp_free);
	}
	lst = NULL;
}
