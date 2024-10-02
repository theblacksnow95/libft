/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:42:44 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/02 18:01:44 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	sizestr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = sizestr(dst);
	i = 0;
	if ((sizestr(src) + len) >= size)
	{
		return (size);
	}
	while (i <= (size - 1) && src[i] != '\0')
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (size + sizestr(src));
}

/* int	main(void)
{
	char dest[20] = "Hola mundo";
	char src[] = " loco";

	printf("Str de destino: %s\n", dest);
	printf("Str a concatenar: %s\n", src);
	printf("Resultado de fn: %zu\n", ft_strlcat(dest, src, sizeof(dest)));
	printf("Cadena final: %s\n", dest);
	return (0);
} */
