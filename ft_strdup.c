/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:16:02 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/09 15:49:50 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
**	La funcion strdup duplica el string
**	creando uno nuevo mediante malloc
**	permite asignar la memoria necesario
**	y hacer un duplicado exacto.
**	usamos strlen para size.
**	No es necesario usar la multiplicacion ya que char ocupa 1
**	sumamos uno extra para el fin de linea '\0'
 */

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *string)
{
	char	*cp;
	int		i;

	i = 0;
	cp = (char *)malloc(ft_strlen(string) * sizeof(char) + 1);
	if (cp == NULL)
	{
		return (NULL);
	}
	while (string[i])
	{
		cp[i] = string[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

/* int	main(void)
{
	char str[] = "The tower is falling one day or another.";
	char *copy;

	copy = ft_strdup(str);
	printf("Result of strdup: %s\n", copy);
	free(copy);
	return (0);
} */
