/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:04:50 by mmiura            #+#    #+#             */
/*   Updated: 2024/04/16 16:37:15 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
/* ft_strlen - The function counts number of characters
 * ret value - Return size_t which defined in libft.h
 * arg - A const string
 */
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
