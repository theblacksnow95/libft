/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:36:33 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/10 18:22:58 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	fcount(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}


char	*ft_itoa(int n)
{
	int	i;
	char *nbr;
	int	len;

	i = 0;
	len = fcount(n);
	nbr = (char *) malloc((sizeof(char) * len) + 1);
	if (!nbr)
		return (NULL);
	while ()
	{
		/* code */
	}

}

int	main(void)
{
	int	nb;

	nb = -50000;
	printf("%i\n", fcount(nb));
	return (0);
}
