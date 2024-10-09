/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:59:20 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/09 19:12:40 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS
# define ABS(x) (absolute_value)

int	absolute_value(int nb);

int	absolute_value(int nb)
{
	if (nb < 0)
	{
		return (nb * -1);
	}
	else
		return (nb);
}

#endif
