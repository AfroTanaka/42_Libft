/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:09:20 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/02 10:11:20 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char* ucdst = (unsigned char*)dst;
    unsigned char* ucsrc = (unsigned char*)src;

    unsigned char* max = ucdst < ucsrc && ucdst + len > ucsrc ? ucsrc : ucdst + len;
    if (ucsrc < ucdst && ucsrc + len > ucdst) {
        size_t overlap = (ucsrc + len) - ucdst;
        ucdst += overlap;
        ucsrc += overlap;
    }

    while (ucdst < max)
        *(ucdst++) = *(ucsrc++);
    
    return dst;
}
