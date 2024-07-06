/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:33:55 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 14:41:31 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
/**
 * @brief Writes len bytes of value c (converted to an unsigned char) to the string b.
 * @param (b) The string that is written len bytes of value c.
 * @param (c) Convertable value of an unsigned char.
 * @param (len) How many bytes to write to the string b.
 * @return (void*) Its first argument.
 */
{
	size_t			i;
	unsigned char	*temp;

	temp = b;
	i = 0;
	while (i < len)
		temp[i++] = (unsigned char) c;
	return (b);
}
