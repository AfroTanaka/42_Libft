/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:01:16 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 13:56:31 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
/**
 * @brief Tests for any character for which ft_isalpha or ft_isdigit is true. The value of the argument must be representable as an unsigned char or the value of EOF.
 * @param (c) This argument must be representable as an unsigned char or the value of EOF.
 * @return (int) Zero if the character tests false and returns non-zero if the character tests true.
 */
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
