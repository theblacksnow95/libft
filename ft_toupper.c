/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:41:08 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/04 14:41:12 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		ch = ch - 32;
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
	printf("%c => %c\n", ch, ft_toupper(ch));
	printf("%c => %c\n", a, ft_toupper(a));
	printf("%c => %c\n", b, ft_toupper(b));
	return (0);
} */
