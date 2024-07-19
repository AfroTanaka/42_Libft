/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:23:21 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/09 12:04:59 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
/**
 * @brief Allocates (with malloc(3)) and returns a new string which is the result of the concatenation of s1 and s2
 * @param (s1) The prefix string.
 * @param (s2) The suffix string.
 * @return (char*) The new string. NULL if the allocation fails.
 */
{
	size_t	size;
	char	*new_s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_s = (char *)ft_calloc(size, sizeof(char));
	if (!new_s)
		return (NULL);
	new_s = (char *)ft_memcpy(new_s, s1, ft_strlen(s1));
	(void)ft_strlcat(new_s, s2, size);
	return (new_s);
}
