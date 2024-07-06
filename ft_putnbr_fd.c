/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:16:22 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/22 12:04:25 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_digits_counter(unsigned int n);
static unsigned int	ft_make_divisor(unsigned int digits);
static void			ft_display_nbr(unsigned int n, \
		unsigned int digits, unsigned int divisor, int fd);

void	ft_putnbr_fd(int n, int fd)
/**
 * @brief Outputs the integer `n` to the given file descriptor.
 * @param (n) The integer to output
 * @param (fd) The file descriptor on which to write
 * @return (void) None
 */
{
	long			tmp_n;
	unsigned int	digits;
	unsigned int	divisor;

	tmp_n = n;
	if (tmp_n < 0)
	{
		ft_putchar_fd('-', fd);
		tmp_n *= -1;
	}
	digits = ft_digits_counter(tmp_n);
	divisor = ft_make_divisor(digits - 1);
	ft_display_nbr(tmp_n, digits, divisor, fd);
}

static unsigned int	ft_digits_counter(unsigned int n)
/**
 * @brief Count how many digits `n` has.
 * @param (n) The target to count digits.
 * @return (unsigned int) How many digits to return
 */
{
	unsigned int	count;

	if (!n)
		return (1);
	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static unsigned int	ft_make_divisor(unsigned int digits)
/**
 * @brief Generate divisor.
 * @param (digits) The element to make divisor
 * @return (unsigned int) Divisor based on `digits`
 */
{
	unsigned int	divisor;
	unsigned int	i;

	divisor = 1;
	i = 0;
	while (i < digits)
	{
		divisor *= 10;
		i++;
	}
	return (divisor);
}

static void	ft_display_nbr(unsigned int n, unsigned int digits, \
		unsigned int divisor, int fd)
/**
 * @breif Display `n` with write (2).
 * @param (n) The element that wants to display
 * @param (digits) How many digits `n` has.
 * @param (divisor) The element is for divide `n`.
 * @param (fd) The file descriptor on which to write
 * @return (void) None
 */
{
	unsigned int	i;
	char			c;

	i = 0;
	while (i < digits)
	{
		c = n / divisor + '0';
		n %= divisor;
		divisor /= 10;
		ft_putchar_fd(c, fd);
		i++;
	}
}
