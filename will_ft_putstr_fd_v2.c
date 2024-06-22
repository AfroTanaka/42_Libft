/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:15:12 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/22 12:17:45 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <unistd.h>

void ft_putstr_fd(char *s, int fd) {
    size_t len;
    size_t i;

	if (!s)
		return ;
	len = ft_strlen(s);
	i = 0;
    while (i < len / INT_MAX)
	{
        write(fd, s, INT_MAX);
        s += INT_MAX;
        i++;
    }
    write(fd, s, len % INT_MAX);
}
