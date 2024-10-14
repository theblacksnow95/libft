/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:59:24 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/14 18:23:25 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_memcmp(const void *buf1, const void *buf2, size_t c);
char	*ft_itoa(int n);
char	*ft_strchr(char *str, int search_chr);
char	*ft_strrchr(const char *str, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(char *big, char *little, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(char *string);
char	**ft_split(char *s, char c);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *buf, int c, size_t len);
void	*ft_calloc(size_t nitems, size_t size);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(char const *str);

#endif
