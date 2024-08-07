/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:48:16 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/19 16:34:23 by mmiura           ###   ########.fr       */
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
	const unsigned char	*tmp;

	i = 0;
	tmp = buf;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)ch)
			return ((void *)(tmp + i));
		i++;
	}
	return (NULL);
}
