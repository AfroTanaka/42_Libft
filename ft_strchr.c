/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:06:56 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 14:47:47 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
/**
 * @brief Locates the first occurence of c (converted to a char) in the string pointed to by s.
 * @param (s) The string that is the target of c.
 * @param (c) The element that search for. will convert to a char.
 * @return (char*) A pointer to the located character, or NULL if the character does not appear in the string.
 * @detail The terminating null character is considered to be part of the string; therefore if c is '\0', the functions locate the terminating '\0'.
 */
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
