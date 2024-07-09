/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:05:31 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/09 11:53:40 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
/**
 * @brief Allocates (with malloc(3)) and returns a new node. The member variable `content` is initialized with the value of the parameter `content`. The variable `next` is initialized to NULL.
 * @param (content) The content to create the node with.
 * @return (t_list) The new node
 */
{
	t_list	*new;

	new = (t_list *)ft_calloc(1, sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
