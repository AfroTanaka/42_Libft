/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:23:21 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 12:29:30 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*new_s;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_s = (char *)ft_calloc(size, sizeof(char));
	if (!new_s)
		return (NULL);
	new_s = (char *)ft_memcpy(new_s, s1, ft_strlen(s1));
	(void)ft_strlcat(new_s, s2, size);
	return (new_s);
}
