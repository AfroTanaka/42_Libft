/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:47:14 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/26 10:56:07 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t			s1_len;
	unsigned char	s1_element_size;
	char			*ret;

	s1_len = ft_strlen(s1);
	s1_element_size = sizeof(s1[0]);
	ret = (char *)ft_calloc(s1_len, s1_element_size);
	if (!ret)
	{ // check how to set errno
		return (NULL);
	}
	ret = ft_memcpy(ret, s1, s1_len);
	return (ret);
}
