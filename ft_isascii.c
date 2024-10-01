/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:45:59 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/01 16:01:20 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
	{
		return (1);
	}
	return (0);
}

/* int	main(void)
{
	int	c;

	c = 0x81;
	printf("result of (%d) is: %i", c, ft_isascii(c));
	return (0);
}
 */
