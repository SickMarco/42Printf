/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:30:21 by mbozzi            #+#    #+#             */
/*   Updated: 2022/11/08 14:20:49 by mbozzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long int nbr, char *base)
{
	int				i;
	int				conv[255];
	int				ret;

	i = 0;
	ret = 0;
	while (nbr >= 16)
	{
		conv[i] = base[nbr % 16];
		nbr = nbr / 16;
		i++;
	}
	conv[i] = base[nbr];
	while (i >= 0)
	{
		write(1, &conv[i], 1);
		i--;
		ret++;
	}
	return(ret);
}