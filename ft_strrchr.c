/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:53:18 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/04 14:11:37 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	i = 0;
	if (c == '\0')
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = "welcome to the university";
	char	c;
	char	*res;

	c = 'y';
	res = ft_strrchr(str, c);
	printf("string after '%c' is '%s'\n", c, res);
	return (0);
} */
