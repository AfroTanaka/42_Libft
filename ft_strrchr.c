/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:01:06 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/20 03:19:31 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
/**
 * @brief The function is identical to ft_strchr(), except it locates the last occurrence of c.
 * @param (s) The target string that the function try to find c.
 * @param (c) The searching element (converted to a char)
 * @return (char*) A pointer to the located character, or NULL if the character does not appear in the string.
 */
{
	unsigned int	s_length;

	if (!*s && c == 0)
		return ((char *)s);
	s_length = ft_strlen(s) + 1;
	while (s_length--)
		if (s[s_length] == (char)c)
			return ((char *)s + s_length);
	return (NULL);
}
