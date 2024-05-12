/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:33:55 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/13 08:55:29 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memset(void *b, int c, size_t len)
/* memset - The function assigns arg2 to appropriate index.
 * ret value - Return void pointer which points the beginning of the arg1 address.
 * arg1 - Void pointer
 * arg2 - An integer value
 * arg3 - A size_t value which's defined in stdio.h
 */
{
	size_t	i;
	char	*temp;

	temp = b;
	i = 0;
	while (i < len)
	{
		temp[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
