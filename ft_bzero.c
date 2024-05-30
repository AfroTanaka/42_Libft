/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:37:59 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 13:47:45 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
/**
 * @brief Writes n zeroed bytes to the string s. If n is zero, it does nothing.
 * @param (s) The string that will fill with 0 with n bytes.
 * @param (n) How many bytes will fill with 0.
 * @return (void) return nothing.
 */
{
	s = ft_memset(s, 0, n);
}
