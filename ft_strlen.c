/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:04:50 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 15:12:56 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
/**
 * @brief Computes the length of the string s.
 * @param (s) The target string that the function try to compute.
 * @return (size_t) The number of characters that precede the terminating NUL character.
 */
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
