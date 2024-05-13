/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:20:42 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/13 11:43:39 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *target, const char *find, size_t len)
/* ft_strnstr - The function locates the first occurrence of the null-terminated string needle in the string target,
 *              where not more than len characters are searched. Chracters that appear after a '\0' character are not searched.
 * ret value - If find is an empty string, target is returned. If find occurs nowhere in target, NULL is returned. Otherwise,
 *             a pointer to the first character of the first occurrence of find is returned.
 * arg1 - A constant character pointer that is for searching len bytes with arg2
 * arg2 - A constant character pointer that you want to find in arg1
 */
{
	const char	*temp_target;
	const char	*temp_find;
	size_t		index;

	while ((!(*target)) && len--)
	{
		temp_target = target;
		temp_find = find;
		index = 0;
		while (!(*temp_find))
		{
			temp_target++;
			temp_find++;
			index++;
		}
		if (*temp_find == '\0')
			return ((char*)temp_find - index);
		target++;
	}
	return (NULL);
}
