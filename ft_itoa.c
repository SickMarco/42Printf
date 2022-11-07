/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:25:43 by mbozzi            #+#    #+#             */
/*   Updated: 2022/11/06 23:42:15 by mbozzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_number_size(int number)
{
	unsigned int	length;
	
	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		length += 1;
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char		*str;
	int	num;
	unsigned int	length;

	length = ft_number_size(n);
	num = n;
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	if (num == 0)
		str[0] = '0';
	str[length] = '\0';
	while (num != 0)
	{
		str[length - 1] = (num % 10) + '0';
		num = num / 10;
		length--;
	}
	return (str);
}