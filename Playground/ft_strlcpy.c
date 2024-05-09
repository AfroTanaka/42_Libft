/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:34:34 by mmiura            #+#    #+#             */
/*   Updated: 2024/04/19 11:28:11 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
/* ft_strlcpy - The function copies dstsize - 1 size from src to dst
 * ret value - Return the length of src
 * arg1 - A character pointer for destination
 * arg2 - A character pointer for source
 * arg3 - A size_t value for the size that you want to copy, size_t is defined in stdio.h
 */
{
	const char	*temp_src;

	if (dstsize == 0)
		return (ft_strlen(src));
	temp_src = src;
	dstsize -= 1;
	while (*temp_src != '\0' && dstsize--)
	{
		*dst = *temp_src;
		dst++;
		temp_src++;
	}
	*dst = '\0';
	return (ft_strlen(src));
}

static size_t	ft_strlen(const char *s)
/* ft_strlen - The function measures how many length the given value has
 * ret value - Return a size_t value which is a length of argument
 * arg - A character pointer
 */
{
	size_t	ret;

	ret = 0;
	while (s[ret])
		ret++;
	return (ret);
}
