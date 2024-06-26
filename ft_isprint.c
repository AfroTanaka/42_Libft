/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:49:27 by mmiura            #+#    #+#             */
/*   Updated: 2024/04/16 11:59:23 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
/* ft_isprint - The function checks if it's a printable character in ascii
 * ret value - Return 0 or 1
 * arg - An integer value as an argument
 */
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}
