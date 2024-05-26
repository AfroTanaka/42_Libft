/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 08:38:01 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/26 08:44:25 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned long	ft_proceed_if_space(const char *s);
static signed char		ft_set_sign_flag(const char *s, unsigned long *i);

int	ft_atoi(const char *nptr)
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
{
	unsigned long	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\f' || s[i] == '\n' || \
			s[i] == '\r' || s[i] == '\t' || s[i] == '\v')
		i++;
	return (i);
}

static signed char	ft_set_sign_flag(const char *s, unsigned long *i)
{
	signed char	flag;

	flag = 1;
	if (s[*i] == '-')
		flag = -1;
	if (s[*i] == '-' || s[*i] == '+')
		(*i)++;
	return (flag);
}
