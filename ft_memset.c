/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:00:11 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/07 17:00:16 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/* int main(void)
{
	char	buffer[10] = "cara";
	int		i;

	printf("Original buffer: %s\n", buffer);
	ft_memset(buffer, 'c', 6);
	printf("Buffer after memset: %s\n", buffer);

	while (i < 10)
	{
		printf("%d", buffer[i]);
		i++;
	}
	printf("\n");
	return (0);
}
 */
