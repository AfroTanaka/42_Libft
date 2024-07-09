/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:14:45 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/09 12:05:36 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
/**
 * @brief Apeends string src to the end of dst.
 * @param (dst) The string that concatenates src to.
 * @param (src) The string that concatenates from.
 * @param (dstsize) Should take the full size of the destination buffer.
 * @return (size_t) The initial length of dst plus the length of src.
 * @detail Takes the full size of the destination buffer and guarantee NULL-termination if there is room. Note that room for the NULL should be included in dstsize. It will append at most dstsize - ft_strlen(dst) - 1 characters. It will then NULL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize. If the src and dst strings overlap, the behaviour is undefined.
 */
{
	size_t	dst_indx;
	size_t	dst_len;
	size_t	cur_src;

	dst_indx = 0;
	while (dst[dst_indx] && dst_indx + 1 < dstsize)
		dst_indx++;
	if (dst[dst_indx])
		return (dstsize + ft_strlen(src));
	dst_len = dst_indx;
	cur_src = 0;
	while (src[cur_src] && dst_indx + 1 < dstsize)
		dst[dst_indx++] = src[cur_src++];
	dst[dst_indx] = '\0';
	return (dst_len + ft_strlen(src));
}
