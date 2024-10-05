/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourlogin <youremail@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:53:41 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/05 12:53:41 by yourlogin        ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strchr(char *str, int search_str);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(char *big, char *little, size_t len);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(char *str);


#endif
