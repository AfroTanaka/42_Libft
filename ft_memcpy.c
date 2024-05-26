/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:25:35 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/17 10:56:55 by mmiura           ###   ########.fr       */
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
	char		*temp_dst;
	const char	*temp_src;

	if (!dst && !src)
		return (NULL);
	temp_dst = dst;
	temp_src = src;
	while (n--)
	{
		*temp_dst = *temp_src;
		temp_dst++;
		temp_src++;
	}
	return (dst);
}
