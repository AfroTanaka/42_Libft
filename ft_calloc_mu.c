/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_mu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:17:23 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/28 11:32:34 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    void    *p;

    if (count > 0 && size > ULONG_MAX / count)
        return ((void *)0);
    p = malloc(size * count);
    if (p == (void *)0)
        return ((void *)0);
    ft_bzero(p, size * count);
    return (p);
}
