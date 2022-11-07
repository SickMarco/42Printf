/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:27:02 by mbozzi            #+#    #+#             */
/*   Updated: 2022/11/07 19:12:03 by mbozzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(long int num, const char ktm)
{
	int len;

	len = 0;
	if (ktm == 'x')
		len += ft_putnbr_base(num, "0123456789abcdef");
	else if (ktm == 'X')
		len += ft_putnbr_base(num, "0123456789ABCDEF");
	return (len);
}