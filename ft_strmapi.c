/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:14:56 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/18 10:30:38 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
/**
 * @brief
 * @param (s)
 * @param (f)
 * @return (char *)
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
