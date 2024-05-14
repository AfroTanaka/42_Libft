/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:53:03 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/13 16:22:18 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
/* ft_strlcat - The function appends src to the end of dst.
 * 				It'll append at most dstsize - (length of dst) - 1 characters
 * ret value - Return dstsize + length of src
 * arg1 - A character pointer
 * arg2 - A constant character pointer
 * arg3 - A size_t value, that should basically assign ft_strlen(dst)
 * 			size_t is defined in stdio.h
 */
{
	size_t	end;
	size_t	i;

	end = dstsize - 1;
	
	if (!src || dstsize == 0 )
	{
		if (ft_strlen(dst) > dstsize)
		{
			return (dstsize + ft_strlen(src));
		}else
		{
			return (ft_strlen(dst) + ft_strlen(src));
		}
	}
	i = ft_strlen(dst);
	while (i < end && *src)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

static size_t	ft_strlen(const char *s)
/* ft_strlen - The function measures how many length the given value has
 * ret value - Return a size_t value which is a length of argument
 * arg - A character pointer
 */
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
