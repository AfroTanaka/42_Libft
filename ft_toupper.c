/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:17:33 by mmiura            #+#    #+#             */
/*   Updated: 2024/04/23 14:22:05 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
/* toupper - The function converts a lower-case to the corresponding upper-case letter.
 * ret value - Return the corresponding upper-case letter if there is a lower-case letter, return unchanged otherwise.
 * arg - An integer value that must be representable as an unsigned char or the value of EOF.
 */
{
	if (97 <= c && c <= 122)
		return (c - 32);
	return (c);
}
