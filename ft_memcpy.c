/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:25:35 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 14:30:54 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
/**
 * @brief Copies n bytes from memory area src to memory area dst.
 * @param (dst) The memory area that copy src to.
 * @param (src) The memory area that copy from.
 * @return (void*) The original value of dst.
 * @detail If dst and src overlap, behaviour is undefined. Applications in which dst and src might overlap should use ft_memmove instead.
 */
{
	size_t				i;
	unsigned char		*temp_dst;
	const unsigned char	*temp_src;

	if (!dst && !src)
		return (NULL);
	i = 0;
	temp_dst = dst;
	temp_src = src;
	while (i < n)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
	return (dst);
}
