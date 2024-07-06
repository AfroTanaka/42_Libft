/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:14:56 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/18 10:36:51 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
/**
 * @brief A new string is created with malloc (3) to collect the results from the successive applications of arg2
 * @param (s) The string on which to iterate.
 * @param (f) The function to apply to each character.
 * @return (char *) The string created from the successive applications of f. NULL if the allocation fails.
 * @detail Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second.
 */
{
	size_t	size;
	size_t	i;
	char	*ret;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	ret = ft_calloc(size + 1, sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	return (ret);
}
