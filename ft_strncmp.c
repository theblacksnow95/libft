/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:43:34 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/03 17:06:15 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && str1[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	while (i < n && str2[i] != '\0')
	{
		if (str2[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	myStr1[] = "ABCD";
	char	myStr2[] = "ABCh";
	int		cmp;

	cmp = ft_strncmp(myStr1, myStr2, 4);
	if (cmp > 0)
	{
		printf("%s is greater than %s\n", myStr1, myStr2);
	}
	else if (cmp < 0)
	{
		printf("%s is greater than %s\n", myStr2, myStr1);
	}
	else
	{
		printf("%s is equal to %s\n", myStr1, myStr2);
	}
} */
