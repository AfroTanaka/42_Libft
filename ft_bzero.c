/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:37:59 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/13 11:25:21 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
/* ft_bzero - The function assigns zero with n bytes to arg1
 * ret value - Return nothing
 * arg1 - Void pointer
 * arg2 - A size_t value, size_t is defined in stdio.h
 */
{
	char	*temp;

	temp = s;
	if (!n)
		return;
	while (n--)
	{
		*temp = '\0';
		temp++;
	}
}
