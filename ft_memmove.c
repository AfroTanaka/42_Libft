/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:32:30 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 14:35:37 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
/**
 * @brief Copies len bytes from string src to string dst.
 * @param (dst) The string that copies src to.
 * @param (src) The string that copies from.
 * @param (len) How many bytes to copy.
 * @return (void*) The origianl value of dst.
 * @detail The two strings may overlap; the copy is always done in a non-destructive manner.
 */
{
	char			*temp_dst;
	const char		*temp_src;

	if (!dst && !src)
		return (NULL);
	temp_dst = dst;
	temp_src = src;
	if (src < dst)
		while (len--)
			temp_dst[len] = temp_src[len];
	else
	{
		while (len--)
		{
			*temp_dst = *temp_src;
			temp_dst++;
			temp_src++;
		}
	}
	return (dst);
}
