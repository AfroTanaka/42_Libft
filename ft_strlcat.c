/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:53:03 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/16 10:18:44 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
/**
 * @ft_strlcat - The function appends src to the end of dst.
 * 				It'll append at most dstsize - (length of dst) - 1 characters
 * @ret value - Return dstsize + length of src
 * @arg1 - A character pointer
 * @arg2 - A constant character pointer
 * @arg3 - A size_t value, that should basically assign ft_strlen(dst)
 * 			size_t is defined in stdio.h
 */
{
	unsigned int	i;
	unsigned int	end;
	size_t			src_len;
	size_t			dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	end = dstsize - dst_len - 1;
	if (!dstsize)
		return (ft_strlen(src));
	if (ft_strlen(dst) >= dstsize)
		return (dstsize + src_len);
	while (i < end && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
