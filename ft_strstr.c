/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:48:49 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/04 15:51:56 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	strstr(char *big,  char *little)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (little[j] == NULL)
	{
		return (&big[i]);
	}
	while (big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0')
			{
				return (big[i - j]);
			}
		}
		else
		{
			j = 0;
		}
		i++;
	}

}
