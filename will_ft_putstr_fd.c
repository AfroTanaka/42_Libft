/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:06:55 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/22 12:12:26 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    size_t len;
    size_t i;

	if (!s)
		return ;
	len = ft_strlen(s);
	i = 0;
    while (i < len / INT_MAX) {
        write(fd, s + (i*INT_MAX), INT_MAX);
        i++;
    }

    write(fd, s + (i*INT_MAX), len % INT_MAX);
}
