/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:11:55 by mmiura            #+#    #+#             */
/*   Updated: 2024/04/23 14:16:54 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
/* ft_tolower - The function converts an upper-case letter to the corresponding lower-case letter.
 * ret value - Return the corresponding lower-case letter if the argument is an upper-case letter, return unchanged otherwise.
 * arg - Must be representable as an unsigned char or the value of EOF.
 */
{
	if (65 <= c && c <= 90)
		return (c + 32);
	return (c);
}
