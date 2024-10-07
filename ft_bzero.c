/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:00:25 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/07 17:00:30 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/* int	main(void)
{
	char	buffer[10] = "Hello!";
	int		i;

	// Imprimimos el buffer original
	printf("Buffer antes de ft_bzero: %s\n", buffer);
	// Aplicamos ft_bzero al buffer
	ft_bzero(buffer, 5);
	// Imprimimos el buffer después de ft_bzero
	printf("Buffer después de ft_bzero: %s\n", buffer);
	// Mostramos los valores del buffer en formato numérico usando while loop
	printf("Contenido del buffer después de ft_bzero (bytes): ");
	i = 0;
	while (i < 10)
	{
		printf("%d ", buffer[i]);
		i++;
	}
	printf("\n");
	return (0);
}
 */
