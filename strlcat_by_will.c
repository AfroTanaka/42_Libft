/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:41:37 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/27 10:14:20 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char* dest, const char* src, size_t size)
{
    size_t out = 0;
    size_t cur_src = 0;

    while (dest[out] && out+1 < size)
	{
        out++;
    }
    if (dest[out])
		return size;
    while (src[cur_src] && out+1 < size)
	{
        dest[out++] = src[cur_src++];
    }
    dest[out] = '\0';
    return (out);
}
