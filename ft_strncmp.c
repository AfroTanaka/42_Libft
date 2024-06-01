/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:12:16 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 15:18:48 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
/**
 * @brief Lexicographically compare the null-terminated strings s1 and s2.
 * @param (s1) The target string to compare
 * @param (s2) The target string to compare
 * @param (n) How many bytes to compare
 * @return (int) An integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.
 * @detail Compares not more than n characters. Characters that appear after a '\0' character are not compared. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.
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
