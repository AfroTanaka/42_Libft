/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:48:16 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 14:16:28 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *buf, int ch, size_t n)
/**
 * @brief Locates the first occurrence of ch (converted to an unsigned char) in string buf with n bytes.
 * @param (buf) The string that is the target of ch.
 * @param (ch) This argument would convert to an unsigned char.
 * @param (n) How many bytes to search.
 * @return (void *) A pointer to the byte located, or NULL if no such byte exists within n bytes.
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
