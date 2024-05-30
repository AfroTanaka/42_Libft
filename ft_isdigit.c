/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:50:58 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 14:06:13 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
/**
 * @brief Tests for a decimal digit character.
 * @param (c) This argument must be representable as an unsigned char or the value of EOF.
 * @return (int) Zero if the character tests false. Non-zero if the character tests true.
 */
{
	return (48 <= c && c <= 57);
}
