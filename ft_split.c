/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:46:55 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/04 14:53:10 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
static size_t	ft_word_counter(const char *s, const char delim);
static char		*ft_word_allocator(const char *s, \
		const char delim, size_t *cur);
static void		ft_words_free(char **s, const size_t cur);

char	**ft_split(char const *s, char c)
{
	char	*smpld_s;
	size_t	sum_words;
	char	**result;
	size_t	i;
	size_t	cur;

	smpld_s = ft_strtrim(s, (char [2]){c, '\0'});
	if (!smpld_s)
		return (NULL);
	sum_words = ft_word_counter(smpld_s, c);
	result = (char **)ft_calloc(sum_words + 1, sizeof(char *));
	if (!result)
	{
		free(smpld_s);
		return (NULL);
	}
	result[sum_words] = NULL;
	i = 0;
	cur = 0;
	while (i < sum_words)
	{
		result[i] = ft_word_allocator(smpld_s, c, &cur);
		if (!result[i])
		{
			ft_words_free(result, i);
			result = NULL;
			free(smpld_s);
			return (result);
		}
		i++;
	}
	free(smpld_s);
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

static char	*ft_word_allocator(const char *s, const char delim, size_t *cur)
{
	size_t	start;
	size_t	end;
	char	*p_word;

	start = *cur;
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
			*cur = end;
			return (p_word);
		}
		start = end + 1;
	}
	return (NULL);
}

static void	ft_words_free(char **s, const size_t cur)
{
	size_t	i;
	i = 0;
	while (i < cur)
	{
		free(*(s + i));
		*(s + i) = NULL;
		i++;
	}
	free(s);
	s = NULL;
}
