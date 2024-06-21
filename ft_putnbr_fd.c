/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:16:22 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/21 13:44:46 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_digits_counter(unsigned int n);
unsigned int	ft_make_divisor(unsigned int digits);
void			ft_display_nbr(unsigned int n, \
		unsigned int digits, unsigned int divisor, int fd);

void	ft_putnbr_fd(int n, int fd)
/**
 * @brief
 * @param (n)
 * @param (fd)
 * @return (void)
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

unsigned int	ft_digits_counter(unsigned int n)
/**
 * @brief
 * @param (n)
 * @return (unsigned int)
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

unsigned int	ft_make_divisor(unsigned int digits)
/**
 * @brief
 * @param (digits)
 * @return (unsigned int)
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

void	ft_display_nbr(unsigned int n, unsigned int digits, \
		unsigned int divisor, int fd)
/**
 * @breif
 * @param (n)
 * @param (digits)
 * @param (divisor)
 * @param (fd)
 * @return (void)
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
