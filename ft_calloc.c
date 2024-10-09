/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:05:19 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/09 13:05:39 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
** this function uses the samme principle than *bzero()*,
** initializing a block of memory equal to (nitems*size) and
** filling all the memory with zeros, allowing us to use it
** and returning a cast void* to us.
*/

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = malloc(nitems * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < nitems * size)
		arr[i++] = 0;
	return ((void *)arr);
}

/* int	main(void)
{
	int	*array;
	int	i;
	int	n;

	i = 0;
	n = 1000;
	array = ft_calloc(n, sizeof(int));
	while (i++ < n)
	{
		printf("%d", array[i]);
		i++;
	}
	free(array);
	printf("\n");
	return (0);
}
 */
