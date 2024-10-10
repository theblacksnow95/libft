/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:59:31 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/10 13:26:55 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strchr(char *str, int search_chr)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search_chr)
			return (&str[i]);
		i++;
	}
	if (search_chr == '\0')
	{
		return (&str[i]);
	}
	return (NULL);
}

/* char	*ft_strchr(char *str, int search_chr)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = str;
	while (str[i] != '\0')
	{
		if (str[i] == search_chr)
		{
			while (str[i] != '\0')
			{
				res[j] = str[i];
				i++;
				j++;
			}
			res[j] = '\0';
			i = i - j;
			return (res);
		}
		i++;
	}
	res[j] = '\0';
	return (NULL);
} */
/*
	int main(void)
{
	char	str[] = "welcome to the university";
	char	c;
	char	*res;

	c = 'v';
	res = ft_strchr(str, c);
	printf("string after '%c' is '%s'\n", c, res);
	return (0);
} */
