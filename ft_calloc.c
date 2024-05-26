/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:09:33 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/26 10:17:27 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	size_t	actual_size;

	actual_size = count * size;
	ret = malloc(actual_size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, actual_size);
	return (ret);
}
