/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:25:35 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/27 09:36:03 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
/* ft_memcpy - The function copys the value of src to dst.
 * ret value - Return void pointer
 * arg1 - Void pointer
 * arg2 - Const void pointer
 * arg3 - A size_t value, size_t is defined in stdio.h
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
