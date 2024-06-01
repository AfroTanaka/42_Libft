/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiura <mmiura@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:49:50 by mmiura            #+#    #+#             */
/*   Updated: 2024/05/31 11:10:25 by mmiura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>

// ft_isalnum.c
int		ft_isalnum(int c);
// ft_isalpha.c
int		ft_isalpha(int c);
// ft_isascii.c
int		ft_isascii(int c);
// ft_isdigit.c
int		ft_isdigit(int c);
// ft_isprint.c
int		ft_isprint(int c);
// ft_strlen.c
size_t	ft_strlen(const char *s);
// ft_memset.c
void	*ft_memset(void *b, int c, size_t len);
// ft_bzero.c
void	ft_bzero(void *s, size_t n);
// ft_memcpy
void	*ft_memcpy(void *dst, const void *src, size_t n);
// ft_memmove
void	*ft_memmove(void *dst, const void *src, size_t len);
// ft_strlcpy
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
// ft_strlcat
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
// ft_memchr
void	*ft_memchr(const void *buf, int ch, size_t n);
// ft_memcmp
int		ft_memcmp(const void *buf1, const void *buf2, size_t n);
// ft_strchr
char	*ft_strchr(const char *s, int c);
// ft_strncmp
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// ft_strnstr
char	*ft_strnstr(const char *target, const char *find, size_t len);
// ft_strrchr
char	*ft_strrchr(const char *s, int c);
// ft_tolower
int		ft_tolower(int c);
// ft_toupper
int		ft_toupper(int c);
// ft_atoi
int		ft_atoi(const char *str);
// ft_calloc
void	*ft_calloc(size_t count, size_t size);
// ft_strdup
char	*ft_strdup(const char *s1);
// ft_substr
char	*ft_substr(char const *s, unsigned int start, size_t len);
// ft_strjoin
char	*ft_strjoin(char const *s1, char const *s2);
// ft_strtrim
char	*ft_strtrim(char const *s1, char const *set);

#endif
