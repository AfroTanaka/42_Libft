/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:09:33 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/29 15:01:49 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>
#include <errno.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (count > 0 && size > (SIZE_MAX / count))
	{
		errno = 0;
		errno = ENOMEM;
		return (NULL);
	}
	ret = malloc(count * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, count * size);
	return (ret);
}
