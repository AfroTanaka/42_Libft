/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:54:51 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/17 13:30:28 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_value_allocator(char *s, int n, \
		unsigned int size, signed char flag);
static unsigned int	ft_digits_counter(int n);
static unsigned int	ft_make_divisor(unsigned int seed);

char	*ft_itoa(int n)
/**
 * @brief
 * @param (n)
 * @return (char *)
 */
{
	signed char		flag;
	unsigned int	size;
	char			*s;

	flag = 0;
	if (n < 0)
	{
		flag = -1;
		n *= flag;
	}
	size = ft_digits_counter(n);
	if (flag)
		size += 1;
	s = (char *)ft_calloc(size + 1, sizeof(char));
	if (!s)
		return (NULL);
	return (ft_value_allocator(s, n, size, flag));
}

static unsigned int	ft_digits_counter(int n)
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
		count++;
		n /= 10;
	}
	return (count);
}

static unsigned int	ft_make_divisor(unsigned int seed)
/**
 * @brief
 * @param (n)
 * @return (unsigned int)
 */
{
	if (!seed)
		return (1);
	return (10 * ft_make_divisor(seed - 1));
}

static char	*ft_value_allocator(char *s, int n, unsigned int size, signed char flag)
/**
 * @brief
 * @param (n)
 * @return (char *)
 */
{
	unsigned int	i;
	unsigned int	divisor;
	unsigned int	div_size;

	i = 0;
	div_size = size;
	if (flag)
	{
		s[i] = '-';
		i += 1;
		div_size -= 1;
	}
	divisor = ft_make_divisor(div_size - 1);
	while (i < size)
	{
		s[i] = n / divisor + '0';
		n %= divisor;
		divisor /= 10;
		i++;
	}
	return (s);
}
