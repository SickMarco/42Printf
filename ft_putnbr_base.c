/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:30:21 by mbozzi            #+#    #+#             */
/*   Updated: 2022/11/07 19:39:30 by mbozzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long int nbr, char *base)
{
	int			i;
	long int	conv[12];
	long int	nb;
	int			ret;

	i = 0;
	nb = nbr;
	ret = 0;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		ret++;
	}
	while (nb != 0)
	{
		conv[i] = nb % 16;
		nb /= 16;
		i++;
	}
	while (i-- > 0)
	{
		write(1, &base[conv[i]], 1);
		ret++;
	}
	return(ret);
}