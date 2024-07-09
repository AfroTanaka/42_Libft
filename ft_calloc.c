/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:09:33 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/09 11:42:43 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>
#include <errno.h>

void	*ft_calloc(size_t count, size_t size)
/**
 * @brief Contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero.
 * @param (count) How many times to get size.
 * @param (size) How much size to get.
 * @return (void *) A pointer to allocated memory. If there is an error, they return a NULL pointer and set errno to ENOMEM.
 */
{
	void	*ret;

	if (count > 0 && size > (SIZE_MAX / count))
	{
		errno = 0;
		errno = ENOMEM;
		return (NULL);
	}
	ret = malloc(count * size);
	if (ret == NULL)
		return (NULL);
	ret = ft_memset(ret, 0, count * size);
	return (ret);
}
