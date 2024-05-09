/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:32:30 by mmiura            #+#    #+#             */
/*   Updated: 2024/04/19 09:50:31 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
/* ft_memmove - The function copies the value of src to dst
 * 				Even if src overlapped dst, it should always be done.
 * ret value - Return void pointer
 * arg1 - A void pointer
 * arg2 - A void pointer
 * arg3 - A size_t value, size_t is defined in stdio.h
 */
{
	char			*temp_dst;
	const char		*temp_src;

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
