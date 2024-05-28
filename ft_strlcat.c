/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:14:45 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/28 11:04:26 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_indx;
	size_t	dst_len;
	size_t	cur_src;

	dst_indx = 0;
	while (dst[dst_indx] && dst_indx + 1 < dstsize)
	{
		dst_indx++;
	}
	if (dst[dst_indx])
		return (dstsize + ft_strlen(src));
	dst_len = dst_indx;
	cur_src = 0;
	while (src[cur_src] && dst_indx + 1 < dstsize)
	{
		dst[dst_indx++] = src[cur_src++];
	}
	dst[dst_indx] = '\0';
	return (dst_len + ft_strlen(src));
}
