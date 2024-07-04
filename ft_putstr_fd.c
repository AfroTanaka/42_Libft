/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:20:51 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/04 12:00:07 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <limits.h>

void	ft_putstr_fd(char *s, int fd)
/**
 * @brief Outputs the string `s` to the given file descriptor.
 * @param (s) The string to output
 * @param (fd) The file descriptor on which to write.
 * @return (void) None
 */
{
	size_t	i;

	if (!s)
		return ;
	if (!*s)
		return ;
	i = 0;
	while (s[i])
	{
		if (i && !(i % INT_MAX))
			write(fd, s + (i - INT_MAX), INT_MAX);
		i++;
	}
	write(fd, s + (i - i % INT_MAX), i % INT_MAX);
}
