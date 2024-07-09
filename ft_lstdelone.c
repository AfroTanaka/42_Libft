/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:25:18 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/09 11:03:33 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
/**
 * @brief Takes as a parameter a node and a fuction `del` to free the memory of the node's content. Free the node.
 * @param (lst) The node to free.
 * @param (del) The address of the function used to delete the content.
 * @return (void) None
 * @detail The memory of `lst->next` must not be freed.
 */
{
	if (lst == NULL || lst->content == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
