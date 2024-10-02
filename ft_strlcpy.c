/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:39:18 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/02 12:35:47 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	while ((i <= size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/* int	test(size_t size)
{
	char	string[] = "El gato bebe leche";
	char	buffer[20];
	size_t		r;

	r = ft_strlcpy(buffer, string, size);
	printf("copied '%s' into '%s', length %zu\n", string, buffer, r);
	return (0);
}

int	main(void)
{
	test(18);
	test(19);
	test(5);
	test(8);
	return (0);
}
*/
