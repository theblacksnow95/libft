/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:41:16 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/04 14:41:20 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
	{
		ch = ch + 32;
		return (ch);
	}
	return (ch);
}

/* int	main(void)
{
	int	ch;
	int	a;
	int	b;

	ch = 'p';
	a = 'S';
	b = '9';
	printf("%c => %c\n", ch, ft_tolower(ch));
	printf("%c => %c\n", a, ft_tolower(a));
	printf("%c => %c\n", b, ft_tolower(b));
	return (0);
} */
