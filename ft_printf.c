/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:57:52 by mbozzi            #+#    #+#             */
/*   Updated: 2022/11/06 23:49:17 by mbozzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_conv(va_list args, const char ktm)
{
	int lenght;

	lenght = 0;
	if (ktm == 'c')
	{
		 ft_putchar(va_arg(args, int));
		lenght++;
	}
	else if (ktm == 's')
		lenght += ft_putstrn(va_arg(args, char *));
	/*else if (ktm == 'p')
		lenght += ft_putptrn(va_arg(args, void *));*/
	else if (ktm == 'd')
		lenght += ft_putnbrn(va_arg(args, int));
	else if (ktm == 'i')
		lenght += ft_putnbrn(va_arg(args, int));
	return (lenght);
}

int	ft_printf(const char *ktm, ...)
{
	int	i;
	int	lenght;
	va_list args;
	va_start(args, ktm);

	i = 0;
	lenght = 0;
	while (ktm[i])
	{
		if (ktm[i] == '%')
		{
			lenght += ft_print_conv(args, ktm[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(ktm[i]);
			lenght++;
		}
		i++;

	}
	va_end(args);
	return (lenght);
}

#include <stdio.h> 

int main()
{
	ft_printf("prova split %d\n", -12345);
	printf ("prova split %d\n", -12345);
	printf("%d\n", ft_printf("prova split %d\n", -12345));
}