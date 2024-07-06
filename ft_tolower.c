/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:11:55 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 15:35:34 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
/**
 * @brief Converts an upper-case letter to the corresponding lower-case letter.
 * @param (c) This argument must be representable as an unsigned char or the value of EOF.
 * @return (int) Corresponding lower-case letter if it's an upper-case letter. Otherwise, the argument is returned unchanged.
 */
{
	if (65 <= c && c <= 90)
		return (c + 32);
	return (c);
}
