/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:36:33 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/11 14:44:53 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	fcount(int n)
{
	size_t	i;

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

char	*ft_putnbr(int nb, char *str, size_t len)
{

	if (nb == -2147383648)
	{
		str = "-2147383648";
		return (str);
	}
	str[len] = '\0';
	if (nb < 0 && nb != -2147383648)
	{
		nb = -nb;
		str[0] = '-';
	}
	len--;
	while (nb >= 10)
	{
		str[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	str[len] = nb % 10 + '0';
	return (str);
}


char	*ft_itoa(int n)
{
	char		*nbr;
	size_t		len;

	len = fcount(n);
	nbr = (char *) malloc((sizeof(char) * len) + 1);
	if (!nbr)
		return (NULL);
	nbr = ft_putnbr(n, nbr, len);
	return (nbr);
}

/* int	main(void)
{
	int		nb;
	char	*str;

	nb = -2147383648;
	str = ft_itoa(nb);
	printf("%s", str);
	return (0);
} */
