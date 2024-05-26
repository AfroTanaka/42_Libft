/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:06:56 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/17 11:46:14 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
/* ft_strchr - The function locates the first occurrence of c in the string pointed to by s.
 *             The terminating null character is considered to be part of the string; therefore if c is '\0',
 *             the functions locate the terminating '\0'.
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
