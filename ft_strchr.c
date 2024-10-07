/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:59:31 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/07 16:59:34 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strchr(char *str, int search_str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search_str)
			return (&str[i]);
		i++;
	}
	if (search_str == '\0')
	{
		return (&str[i]);
	}
	return (NULL);
}

/* char	*ft_strchr(char *str, int search_str)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = str;
	while (str[i] != '\0')
	{
		if (str[i] == search_str)
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
