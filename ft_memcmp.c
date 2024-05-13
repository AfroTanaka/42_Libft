/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:56:11 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/13 11:42:35 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
/* ft_memcmp - The function compares byte string buf1 against byte string buf2. Both strings are assumed to be n bytes long.
 * ret value - Return zero if the two strings are identical, otherwise returns the difference between the first two differing bytes
 *             Zero-length strings are always identical. This behavior is not required by C and portable code should only depend on
 *             the sign of the returned value.
 * arg1 - A constant void pointer that compares with arg2
 * arg2 - A constant void pointer that compares with arg1
 */
{
	size_t	i;
	const char	*temp_buf1;
	const char	*temp_buf2;

	i = 0;
	temp_buf1 = buf1;
	temp_buf2 = buf2;
	while (i < n)
	{
		if ((unsigned char)temp_buf1[i] - (unsigned char)temp_buf2[i] != 0)
			return (temp_buf1[i] - temp_buf2[i]);
		i++;
	}
	return (0);
}
