/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:48:16 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/15 12:32:14 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *buf, int ch, size_t n)
/* ft_memchr - The function locates the first occurrence of ch in string buf
 * ret value - Return a pointer to the byte located, or NULL if no such byte exists within n bytes.
 * arg1 - The void pointer that is for finding arg2.
 * arg2 - The integer value that you want to find in buf.
 */
{
	size_t				i;
	const unsigned char	*temp;
	const int			*buf_int;

	i = 0;
	temp = buf;
	buf_int = buf;
	while (i < n)
	{
		if (temp[i] == (unsigned char)ch)
			return ((void *)(temp + i));
		i++;
	}
	return (NULL);
}
