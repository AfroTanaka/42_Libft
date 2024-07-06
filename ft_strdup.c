/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:47:14 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/30 14:52:56 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>

char	*ft_strdup(const char *s1)
/**
 * @brief Allocates sufficient memory for a copy of the string s1.
 * @param (s1) The source string that copies to.
 * @return (char*) A pointer to the object that copied already. NULL is returned if insufficient memory is available.
 * @detail The pointer may subsequently be used as an argument to the function free(3). If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
 */
{
	size_t			s1_len;
	unsigned char	s1_element_size;
	char			*ret;

	s1_len = ft_strlen(s1);
	s1_element_size = sizeof(s1[0]);
	ret = (char *)ft_calloc(s1_len + 1, s1_element_size);
	if (!ret)
	{
		errno = 0;
		errno = ENOMEM;
		return (NULL);
	}
	ret = ft_memcpy(ret, s1, s1_len);
	return (ret);
}
