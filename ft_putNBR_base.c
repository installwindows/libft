/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putNBR_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <varnaud@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:14:15 by varnaud           #+#    #+#             */
/*   Updated: 2016/11/19 14:55:00 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putNBR_base(long long nbr, int base)
{
	int		n;

	if (nbr < 0)
	{
		n = 1;
		ft_putchar('-');
		if (nbr <= -base)
			n = ft_putNBR_base(nbr / -base, base) + 1;
		ft_putchar(ft_itoC(-(nbr % base)));
	}
	else if (nbr >= base)
	{
		n = ft_putNBR_base(nbr / base, base);
		ft_putchar(ft_itoC(nbr % base));
	}
	else
	{
		n = 0;
		ft_putchar(ft_itoC(nbr % base));
	}
	return (n + 1);
}
