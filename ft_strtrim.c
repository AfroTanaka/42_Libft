/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:19:44 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/19 16:58:37 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_rtrim(char const *s1, char const *set);
static size_t	ft_ltrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
/**
 * @brief Allocates (with malloc(3)) and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string.
 * @param (s1) The string to be trimmed.
 * @param (set) The reference set of characters to trim.
 * @return (char*) The trimmed string. NULL if the allocation fails.
 * @detail NULL pointer if either s1 or set is NULL pointer.
 */
{
	size_t	start;
	size_t	end;
	size_t	size;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_ltrim(s1, set);
	if (!s1[start])
		return (ft_strdup(""));
	end = ft_rtrim(s1, set);
	size = end - start + 1;
	return (ft_substr(s1, start, size));
}

static size_t	ft_rtrim(char const *s1, char const *set)
/**
 * @brief Proceed index until the character does not appear in set.
 * @param (s1) The string to be trimmed.
 * @param (set) The reference set of characters to trim.
 * @return (size_t) The index that is the index of string which's already trimmed.
 * @detail the direction to proceed from right.
 */
{
	long	s1_indx;
	size_t	set_len;
	size_t	i;

	s1_indx = ft_strlen(s1) - 1;
	while (s1_indx >= 0)
	{
		set_len = ft_strlen(set);
		i = 0;
		while (i < set_len)
		{
			if (s1[s1_indx] == set[i])
				break ;
			i++;
		}
		if (!set[i])
			return (s1_indx);
		s1_indx--;
	}
	return (s1_indx);
}

static size_t	ft_ltrim(char const *s1, char const *set)
/**
 * @brief Proceed index until the character does not appear in set.
 * @param (s1) The string to be trimmed.
 * @param (set) The reference set of characters to trim.
 * @return (size_t) The index that is the index of string which's already trimmed.
 * @detail the direction to proceed from left.
 */
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
				break ;
			j++;
		}
		if (!set[j])
			return (i);
		i++;
	}
	return (i);
}
