/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:46:55 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/02 12:05:34 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_counter(const char *s, const char delim);
static char		*ft_word_allocater(const char *s, const char delim);
static void		ft_word_free(char const **s); // 引数は吟味する必要がある。

char	**ft_split(char const *s, char c)
{
	char	*smpld_s;
	size_t	sum_words;
	char	**result;
	size_t	i;

	smpld_s = ft_strtrim(s, (char[2]){c, '\0'});
	if (!smpld_s)
		return (NULL);
	sum_words = ft_word_counter(smpld_s, c);
	result = (char **)calloc(sum_words + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	result[sum_words] = NULL;
	while (i < sum_words)
	{
		result[i] = ft_word_allocater(smpld_s, c);
		if (!result[i])
			// call free wrapper func.
		i++;
	}
	return (result);
}

static size_t	ft_word_counter(const char *s, const char delim)
{
	size_t	start_indx;
	size_t	end_indx;
	size_t	word_count;

	word_count = 0;
	start_indx = 0;
	while (s[start_indx])
	{
		end_indx = start_indx;
		while (s[end_indx] != delim && s[end_indx])
			end_indx++;
		if (start_indx != end_indx)
			word_count++;
		if (!s[end_indx])
			return (word_count);
		start_indx = end_indx + 1;
	}
	return (word_count);
}

static char		*ft_word_allocater(const char *s, const char delim)
{
	size_t	start;
	size_t	end;
	char	*p_word;

	start = 0;
	while (s[start])
	{
		end = start;
		while (s[end] != delim && s[end])
			end++;
		if (start != end)
		{
			p_word = ft_substr(s, start, end - start);
			if (!p_word)
				return (NULL);
			s += end;
			return (p_word);
		}
		start = end + 1;
	}
	return (NULL);
}
