/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:17:33 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 15:37:02 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
/**
 * @brief Converts a lower-case letter to the corresponding upper-case letter.
 * @param (c) This argument must be representable as an unsigned char or the value of EOF.
 * @return (int) Corresponding upper-case letter if it's a lower-case letter. Otherwise, the argument is returned unchanged.
 */
{
	if (97 <= c && c <= 122)
		return (c - 32);
	return (c);
}
