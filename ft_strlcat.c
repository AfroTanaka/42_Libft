/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:53:03 by mmiura            #+#    #+#             */
/*   Updated: 2024/04/19 12:12:41 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s);

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

	end = dstsize - ft_strlen(dst) - 1;
	i = ft_strlen(dst);
	if (dstsize == 0 || (dstsize - ft_strlen(dst) - 1) < ft_strlen(src))
		return (dstsize + ft_strlen(src));
	while (i <= end)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = '\0';
	return (dstsize + ft_strlen(src));
}

size_t	ft_strlen(const char *s)
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
