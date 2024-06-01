/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 10:37:58 by mmiura            #+#    #+#             */
/*   Updated: 2024/06/01 10:39:19 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	/*char s1[] = "lorem ipsum dolor sit amet";
	puts("\x1b[31mExpected...\x1b[0m");
	puts("lorem ipsum dolor sit am");
	puts("\x1b[31mMy result...\x1b[0m");
	printf("%s\n", ft_strtrim(s1, "te"));*/
	
	//char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	/*char s1[] = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	puts("\x1b[31mExpected...\x1b[0m");
	puts(s2);
	puts("\x1b[31mMy result...\x1b[0m");
	printf("%s\n", ft_strtrim(s1, " \n\t"));*/

	//char s1[] = "ABCAA";
	//char c = 'A';
	//puts("\x1b[31mExpected...\x1b[0m");
	//puts("");
	//puts("\x1b[31mMy result...\x1b[0m");
	printf("%s\n", ft_strtrim(s1, (char [2]){c, 0}));
}
