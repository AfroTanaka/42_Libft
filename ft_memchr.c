/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:48:16 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/13 11:42:05 by mmiura           ###   ########.fr       */
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
	const char	*temp;

	temp = buf;
	while (n--)
		if (*temp == ch)
			return ((void*)temp);
	return (NULL);
}
