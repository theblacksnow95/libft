/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourlogin <youremail@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:10:08 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/05 12:10:08 by yourlogin        ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
	{
		return ((char *)&big[i]);
	}
	while (big[i] != '\0' && i <= len)
	{
		if (big[i] == little[j] && little[j] != '\0')
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i - j + 1]);
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	s1[] = "las flores rojas";
	char	*res;
	char	s2[] = "flor";

	res = ft_strstr(s1, s2, 7);
	printf("'%s' found at '%s'\n", s2, res);
} */
