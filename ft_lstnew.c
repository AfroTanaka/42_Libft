/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:20:02 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/29 10:09:39 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;


t_list	ft_lstnew(void *content)
{
	t_list	new;

	new.content = content;
	new.next = NULL;
	return (new);
}

int main()
{
	t_list temp;

	temp = ft_lstnew("Hello");
	printf("%s\n", temp.content);
	printf("%p\n", temp.next);
}
