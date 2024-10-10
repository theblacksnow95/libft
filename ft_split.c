/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:12:35 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/10 17:33:05 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(char *str, int search_chr);
size_t	ft_strlen(char *str);

size_t	word_count(char const *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if ((i == 0 || str[i - 1] == c) && str[i] != c)
			count++;
		i++;
	}
	return (count);
}

void	fill_split(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	wlen;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (ft_strchr(s, c))
				wlen = ft_strchr(s, c) - s;
			else
				wlen = ft_strlen(s);
			arr[i++] = ft_substr(s, 0, wlen);
			s += wlen;
		}
		else
			s++;
	}
		arr[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	wlen;
	size_t	wn;
	char	**arr;

	i = 0;
	wlen = 0;
	wn = word_count(s, c);
	arr = (char **)malloc((sizeof(char*) * wn) + 1);
	if (!arr)
		return (NULL);
	fill_split(arr, s, c);
	return (arr);
}

/*  int	main(void)
{
	char	str[] = "hello, -world, -this, -is, -a, -test";
	int		i;
	char	delimiter = ' ';
	char	**result;

	i = 0;
	result = ft_split(str, delimiter);
	if (result == NULL)
	{
		printf("Error: ft_split returned NULL.\n");
		return (1);
	}
	while (result[i])
	{
		printf("Word %d: %s\n", i + 1, result[i]);
		i++;
	}
	free(result);
	return (0);
}
 */