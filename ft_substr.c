/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:13:45 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/29 13:12:51 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (!len || start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (ft_strlen(s) < len)
		ret = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(s[0]));
	else
		ret = (char *)ft_calloc(len + 1, sizeof(s[0]));
	if (!ret)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
		ret[i++] = s[start++];
	return (ret);
}
