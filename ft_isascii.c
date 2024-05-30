/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:27:31 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 14:06:44 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
/**
 * @brief Tests for an ASCII character, which is any character between 0 and decimal 127 inclusive.
 * @param (c) An integer character
 * @return (int) Non-zero if it's an ASCII character. Zero otherwise.
 */
{
	return (0 <= c && c <= 127);
}
