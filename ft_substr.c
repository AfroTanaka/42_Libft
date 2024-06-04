/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:13:45 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/04 13:53:20 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
/**
 * @brief Allocates (with malloc(3)) and returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'.
 * @param (s) The string from which to create the substring.
 * @param (start) The start index of the substring in the string 's'.
 * @param (len) The maximum length of the substring.
 * @return (char*) The substring. NULL if the allocation fails.
 */
{
	char	*ret;
	size_t	i;

	if (!s)
		return (NULL);
	if (!len || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		ret = (char *)ft_calloc(ft_strlen(&s[start]) + 1, sizeof(s[0]));
	else
		ret = (char *)ft_calloc(len + 1, sizeof(s[0]));
	if (!ret)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
		ret[i++] = s[start++];
	return (ret);
}
