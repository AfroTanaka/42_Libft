/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:39:16 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 14:40:46 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
/**
 * @brief Tests for any character for which isupper(3) or islower(3) is true.
 * @param (c) This argument must be representable as an unsigned char or the value of EOF.
 * @return (int) Zero if the character tests false and non-zero if the character tests true.
 */
{
	return ((65 <= c && c <= 90) || (97 <= c && c <= 122));
}
