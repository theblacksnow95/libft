/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:46:39 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/01 14:58:41 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1024);
	}
	else
		return (0);
}

/* int	main(void)
{
	char	c;

	c = '7';
	printf("result: %d", ft_isdigit(c));
	return (1);
}
 */
