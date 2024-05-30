/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:27:31 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 15:26:36 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
/**
 * @brief Locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.
 * @param (haystack) The target string that the function try to find needle to.
 * @param (needle) The target string that the function try to find in haystack.
 * @param (len) How many bytes to try to find.
 * @return (char*) haystack is returned if needle is an empty string. NULL is returned if needle occurs nowhere in haystack. Otherwise a pointer to the first character of the first occurrence of needle is returned.
 * @detail Characters that appear after a '\0' character are not searched.
 */
{
	size_t	i;
	size_t	end_len;
	size_t	needle_len;

	if (!(*needle))
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	if (!*haystack || !len || len < needle_len)
		return (NULL);
	end_len = len - needle_len;
	i = 0;
	while (i <= end_len && haystack[i])
	{
		if (haystack[i] == needle[0] && \
				!(ft_strncmp(haystack + i, needle, ft_strlen(needle))))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
