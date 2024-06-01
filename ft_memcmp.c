/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:56:11 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 14:29:05 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
/**
 * @brief Compares byte string buf1 against byte string bu2. Both strings are assumed to be n bytes long.
 * @param (buf1) The byte string's compared against byte string buf2.
 * @param (buf2) The byte string that compares to buf1.
 * @param (n) how many bytes to compare.
 * @return (int) Zero if the two strings are identical, otherwise the difference between the first two differing bytes (treated as unsigned char values.).
 * @detail Zero-length strings are always identical. The behaviour is not required by C and portable code should only depend on the sign of the returned value.
 */
{
	const unsigned char	*temp_buf1;
	const unsigned char	*temp_buf2;
	size_t				i;

	i = 0;
	temp_buf1 = buf1;
	temp_buf2 = buf2;
	while (i < n)
	{
		if (temp_buf1[i] - temp_buf2[i] != 0)
			return (temp_buf1[i] - temp_buf2[i]);
		i++;
	}
	return (0);
}
