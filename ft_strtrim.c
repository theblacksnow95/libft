/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:38:39 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/10 17:31:37 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char	*ft_strchr(char *str, int search_chr);
size_t	ft_strlen(char *str);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	len;
	char	*res;

	i = 0;
	start = 0;
	len = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (len > start && ft_strchr(set, s1[len - 1]))
	{
		len--;
	}
	res = (char *) malloc(sizeof(char) * (len - start + 1));
	if (!res)
		return (NULL);
	while (start < len)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}

/* int	main(void)
{
	char	str[] = "bcaaabca12sabch2abcabc";
	char	set[] = "abc";
	char	*res;

	res = ft_strtrim(str, set);
	printf("%s", res);
	return (0);
} */
