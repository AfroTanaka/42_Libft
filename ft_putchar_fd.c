/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:52:43 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/18 13:00:36 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
/**
 * @brief Outputs the character `c` to the given file descriptor.
 * @param (c) The character to output
 * @param (fd) The file descriptor on which to write.
 * @return (void) None
 */
{
	write(fd, &c, 1);
}
