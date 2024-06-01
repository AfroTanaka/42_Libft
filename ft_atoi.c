/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 08:38:01 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 13:44:28 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned long	ft_proceed_if_space(const char *s);
static signed char		ft_set_sign_flag(const char *s, unsigned long *i);

int	ft_atoi(const char *nptr)
/**
 * @brief Converts the initial portion of the string pointed to by str to int representation.
 * @param (nptr) The string that would be converted to int.
 * @return (int) Some integers which converted from @param.
 */
{
	long			ret;
	unsigned long	index;
	signed char		flag;

	index = ft_proceed_if_space(nptr);
	flag = ft_set_sign_flag(nptr, &index);
	ret = 0;
	while ('0' <= nptr[index] && nptr[index] <= '9')
	{
		ret = ret * 10 + (nptr[index] - '0');
		index++;
	}
	return (flag * ret);
}

static unsigned long	ft_proceed_if_space(const char *s)
/**
 * @brief Proceed if s[current] is isspace().
 * @param (s) The string that would be proceeded along with isspace().
 * @return (static unsigned long) Index after proceeded at !isspace().
 */
{
	unsigned long	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\f' || s[i] == '\n' || \
			s[i] == '\r' || s[i] == '\t' || s[i] == '\v')
		i++;
	return (i);
}

static signed char	ft_set_sign_flag(const char *s, unsigned long *i)
/**
 * @brief Set sign flag -1 if it's minus, 1 otherwise.
 * @param (s) The string that might include a sign flag.
 * @param (i) The unsigned long integer that represents the current index.
 * @return (static signed char) -1 if it's minus, 1 otherwise.
 */
{
	signed char	flag;

	flag = 1;
	if (s[*i] == '-')
		flag = -1;
	if (s[*i] == '-' || s[*i] == '+')
		(*i)++;
	return (flag);
}
