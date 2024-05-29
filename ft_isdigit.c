/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:50:58 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/29 13:58:07 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
/* ft_isdigit - The function checks if it's a decimal-character
 * arg - An integer value as an argument
 * ret value - Return 0 or 1
 */
{
	return (48 <= c && c <= 57);
}
