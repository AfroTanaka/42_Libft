/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:34:34 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 15:08:27 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
/**
 * @brief Copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.
 * @param (dst) The string that src copies to.
 * @param (src) The string that copies from
 * @param (dstsize) Should take the full size of the destination buffer and gurantee NUL-termination if there is room.
 * @return (size_t) The length of src.
 * @detail Room for the NUL should be included in dstsize.
 */
{
	const char	*temp_src;

	if (dstsize == 0)
		return (ft_strlen(src));
	temp_src = src;
	dstsize -= 1;
	while (*temp_src != '\0' && dstsize--)
	{
		*dst = *temp_src;
		dst++;
		temp_src++;
	}
	*dst = '\0';
	return (ft_strlen(src));
}
