/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:20:02 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/18 11:32:19 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
/**
 * @brief Applies the function f on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to f to be modified if necessary.
 * @param (s) The string on which to iterate
 * @param (f) The function to aplly to each character.
 * @return (void) None
 */
{
	size_t	i;
	size_t	size;

	if (!s)
		return ;
	size = ft_strlen(s);
	i = 0;
	while (i < size)
	{
		f(i, &s[i]);
		i++;
	}
}
