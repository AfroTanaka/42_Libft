/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:27:31 by mmiura            #+#    #+#             */
/*   Updated: 2024/04/16 11:39:22 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
/* ft_isascii - The function checks if it's in ascii table
 * arg - An integer value as an argument
 * ret value - Return 0 or 1
 */
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}
