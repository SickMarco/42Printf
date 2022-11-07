/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:17:33 by mbozzi            #+#    #+#             */
/*   Updated: 2022/11/07 16:22:42 by mbozzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_number_size_unsigned(unsigned int number)
{
	unsigned int	length;
	
	length = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char		*str;
	unsigned int	num;
	unsigned int	length;

	length = ft_number_size_unsigned(n);
	num = n;
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
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

int	ft_unsign(int num)
{
	char	*str;
	int		i;
	int 	len;
	unsigned int n;
	
	len = 0;
	i = 0;
	n = (unsigned int)num;
	str = ft_itoa_unsigned(n);
	while (str[i])
		write(1, &str[i++], 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}