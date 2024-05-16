/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:27:31 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/16 12:48:55 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	end_len;
	size_t	needle_len;

	if (!(*needle))
		return ((char *)haystack);
	if (len <= 0 || !(*haystack))
		return (NULL);
	needle_len = ft_strlen(needle);
	if (len >= needle_len)
		end_len = len - needle_len;
	else
		end_len = len;
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
