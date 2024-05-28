/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:09:33 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/28 13:15:58 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	register void	*ret;
	//size_t	actual_size;

	//actual_size = count * size;
	//ret = malloc(actual_size);
	if (!count || !size)
		count = size = 1;
	ret = malloc(count * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, count * size);
	//ft_bzero(ret, actual_size);
	//printf("how much memory will allocate: %zu\n", actual_size);
	//printf("count: %zu\nsize: %zu\nallocated size: %zu\n", count, size,actual_size);
	return (ret);
}
