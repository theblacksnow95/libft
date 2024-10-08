/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:58:00 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/08 18:17:47 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	int	*arr;
	size_t			i;

	i = 0;
	arr = (int *)malloc (nitems * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i++ < nitems)
	{
		arr[i] = 0;
	}
	return (arr);
}

int	main(void)
{
	int*	array;
	int		i;

	i = 0;
	array = ft_calloc(100, sizeof(int));
	while (i++ < 100)
	{
		printf("%d", array[i]);
		i++;
	}
	free(array);
	printf("\n");
	return (0);
}

