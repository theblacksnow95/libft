/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:02:42 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/01 17:50:22 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	int	c;

	c = 32;
	if (ft_isprint(c))
	{
		printf("The value %d is printable", c);
	}
	else
		printf("The value %d is NOT printable", c);
	return (1);
}
