/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:31:47 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/14 13:03:56 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	c = c & 0xFF;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}


/*  int	main(void)
{
	char	str[] = "welcome to the university";
	char	c;
	char	*res;

	c = 't' + 256;
	res = ft_strrchr(str, c);
	printf("string after '%c' is '%s'\n", c, res);
	return (0);
}
 */
