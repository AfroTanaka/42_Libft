/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:33:59 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/31 11:17:36 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_rtrim(char *s1, char const *set);
static char		*ft_ltrim(char *s1, char const *set);
static size_t	ft_proceed(char *s1, char const *set, const char flag);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;

	return (s = ft_ltrim(ft_rtrim((char *)s1, set), set), s = ft_strdup(s), s);
}

static char	*ft_rtrim(char *s1, char const *set)
{
	(void)ft_proceed(s1, set, 'r');
	return (s1);
}

static char	*ft_ltrim(char *s1, char const *set)
{
	size_t	start_indx;

	start_indx = ft_proceed(s1, set, 'l');
	s1 = (char *)ft_memmove(s1, &s1[start_indx], \
			ft_strlen(&s1[start_indx]) + 1);
	return (s1);
}

static size_t	ft_proceed(char *s1, char const *set, const char flag)
{
	size_t	index;
	size_t	cmpt_indx;
	size_t	set_indx;

	index = ft_strlen(s1);
	cmpt_indx = index;
	if (flag == 'r')
		cmpt_indx = 0;
	while (s1[index - cmpt_indx])
	{
		set_indx = index;
		while (set[set_indx])
		{
			if (s1[index - cmpt_indx] == set[set_indx])
				break ;
			set_indx++;
		}
		if (!set[set_indx])
			return (index - cmpt_indx);
		if (flag == 'r')
			cmpt_indx++;
		else
			cmpt_indx--;
	}
	return (index - cmpt_indx);
}
