/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:27:31 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/29 13:53:01 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
/* ft_isascii - The function checks if it's in ascii table
 * arg - An integer value as an argument
 * ret value - Return 0 or 1
 */
{
	return (0 <= c && c <= 127);
}
