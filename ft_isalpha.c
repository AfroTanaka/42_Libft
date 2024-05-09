/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:39:16 by mmiura            #+#    #+#             */
/*   Updated: 2024/04/16 10:50:20 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
/* ft_isalpha - The function checks if it's in alphabet
 * arg - An integer value as an argument
 * ret value - Return 0 or 1
 */
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	else
		return (0);
}
