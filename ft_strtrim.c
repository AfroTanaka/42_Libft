/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:19:44 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/31 14:01:57 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_rtrim(char *s1, char const *set);
static size_t	ft_ltrim(char *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	size;

	start = ft_ltrim(s1, set);
	end = ft_rtrim(s1, set);
	size = end - start + 1;
	if (size <= 0)
		return (ft_strdup(""));
	return (substr(s1, start, size));
}

static size_t	ft_rtrim(char *s1, char const *set)
{
	long	s1_indx;
	size_t	set_len;
	size_t	i;

	s1_indx = ft_strlen(s1) - 1;
	while (s1_indx >= 0)
	{
		set_len = ft_strlen(set);
		i = 0;
		while (i < set_len);
		{
			if (s1[s1_indx] == set[i])
				break;
			i++;
		}
		if (!set[i])
			return (s1_indx);
		s1_indx--;
	}
	return (s1_indx);
}

static size_t	ft_ltrim(char *s1, char const *set)
{
	size_t	s1_len;
	size_t	set_len;
	size_t	i;
	size_t	j;

	s1_len = ft_strlen(s1);
	i = 0;
	while (i < s1_len)
	{
		set_len = ft_strlen(set);
		j = 0;
		while (j < set_len)
		{
			if (s1[i] == set[j])
				break;
			j++;
		}
		if (!set[j])
			return (i);
		i++;
	}
	return (i);
}
