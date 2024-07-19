/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:54:51 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/09 11:45:16 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_str_converter(char *s, int n, \
		unsigned int size, signed char flag);
static unsigned int	ft_digits_counter(int n);
static unsigned int	ft_make_divisor(unsigned int seed);

char	*ft_itoa(int n)
/**
 * @brief Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
 * @param (n) The integer to convert
 * @return (char *) The string representing the integer. NULL if the allocation fails.
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
	if (s == NULL)
		return (NULL);
	return (ft_str_converter(s, n, size, flag));
}

static unsigned int	ft_digits_counter(int n)
/**
 * @brief Count digits of a parameter
 * @param (n) The integer to count
 * @return (unsigned int) How many digits parameter has.
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
 * @brief Generate the divisor which is 10 to the power of seed.
 * @param (seed) The value for the element of the power
 * @return (unsigned int) Divisor based on 10 to the power of seed.
 */
{
	if (!seed)
		return (1);
	return (10 * ft_make_divisor(seed - 1));
}

static char	*ft_str_converter(char *s, int n, \
		unsigned int size, signed char flag)
/**
 * @brief Convert the parameter2 as string.
 * @param (s) The area to assign string from the parameter2
 * @param (n) The value to convert as string
 * @param (size) The number of character the parameter2 has.
 * @param (flag) Check if the parameter2 is negative.
 * @return (char *) The string converted from parameter2.
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
