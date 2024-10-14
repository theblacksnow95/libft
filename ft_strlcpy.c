/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourlogin <youremail@student.42lausanne.ch>    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:27:38 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/14 11:48:23 by yourlogin        ###   ########.ch       */
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
	if (size == 0)
		return(len);
	while ((i < size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

int	test(size_t size)
{
	char	string[] = "lorem ipsum dolor sit amet";
	char	buffer[20];
	size_t	r;

	r = ft_strlcpy(buffer, string, size);
	printf("copied '%s', length %zu\n", buffer, r);
	return (0);
}

/* int	main(void)
{
	test(0);
	return (0);
} */


