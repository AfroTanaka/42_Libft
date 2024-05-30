/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:49:27 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 14:09:30 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
/**
 * @brief Tests for any printing character, including space.
 * @param (c) The value of the argument must be representable as an unsigned char or the value of EOF.
 * @return (int) Zero if the character tests false. Non-zero if the character tests true.
 */
{
	return (32 <= c && c <= 126);
}
