/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:01:06 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/16 10:21:51 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
/* ft_strrchr - The function locates the last occurrence of c in the dstring pointed to by s.
 *              The terminating null character is considered to be part of the string.
 *              Therefore if c is '\0', the functions locate the terminating '\0'.
 * ret value - Return a pointer to the located character, or NULL if the character does not appear in the string.
 * arg1 - A constant character value that is a target for arg2
 * arg2 - An integer value that is an element for searching in arg1
 */
{
	size_t	s_length;

	s_length = ft_strlen(s);
	if (c == 0 && s[s_length] == '\0')
		return ((char *)s + s_length);
	while (s_length--)
		if (s[s_length] == c)
			return ((char *)s + s_length);
	return (NULL);
}
