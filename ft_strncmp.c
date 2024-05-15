/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:12:16 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/15 10:00:19 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
/* ft_strncmp - The function compares not more than n characters. Because this function is designed for comparing strings
 *             rather than binary data, characters that appear after a '\0' character are not compared.
 * ret value - Return an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than
 *             the string s2. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.
 */
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] - (unsigned char)s2[i] != 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
