/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:46:55 by mmiura            #+#    #+#             */
/*   Updated: 2024/07/09 12:35:49 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_word_counter(const char *s, const char delim);
static char		*ft_word_allocator(const char *s, \
		const char delim, size_t *cur);
static void		ft_words_free(char **s, const size_t cur);

char	**ft_split(char const *s, char c)
/**
 * @brief Allocates (with malloc (3)) and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. The array must end with a NULL pointer.
 * @param (s) The string to be split
 * @param (c) The delimiter character
 * @return (char **) The array of new strings resulting from the split. NULL if the allocation fails.
 */
{
	char	*smpld_s;
	size_t	sum_words;
	char	**result;
	size_t	i;
	size_t	cur;

	smpld_s = ft_strtrim(s, (char [2]){c, '\0'});
	if (smpld_s == NULL)
		return (NULL);
	sum_words = ft_word_counter(smpld_s, c);
	result = (char **)ft_calloc(sum_words + 1, sizeof(char *));
	if (result == NULL)
		return (free(smpld_s), NULL);
	result[sum_words] = NULL;
	i = 0;
	cur = 0;
	while (i < sum_words)
	{
		result[i] = ft_word_allocator(smpld_s, c, &cur);
		if (!result[i])
			return (ft_words_free(result, i), \
					result = NULL, free(smpld_s), result);
		i++;
	}
	return (free(smpld_s), result);
}

static size_t	ft_word_counter(const char *s, const char delim)
/**
 * @brief Counts how many words are in `s`.
 * @param (s) The string to be counted.
 * @param (delim) The delimiter that defines what a word is.
 * @return (size_t) Return count of the words.
 */
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
/**
 * @brief Allocates (with malloc (3)) a word.
 * @param (s) The string to be splitted a word by `delim`
 * @param (delim) The delimineter that defines what a word is.
 * @param (cur) The current index
 * @return (char *) Return the pointer of a word. NULL if the allocation failed or there's no word.
 */
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
			if (p_word == NULL)
				return (NULL);
			*cur = end;
			return (p_word);
		}
		start = end + 1;
	}
	return (NULL);
}

static void	ft_words_free(char **s, const size_t cur)
/**
 * @brief Frees (with free (3)) words.
 * @param (s) The link to a word list
 * @param (cur) The current index of the word list
 * @return (void) None
 */
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
