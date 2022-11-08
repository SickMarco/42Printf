/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:19:11 by mbozzi            #+#    #+#             */
/*   Updated: 2022/11/08 14:17:00 by mbozzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putstrn(char *str)
{
	int		i;
	char	*tmp;
	int		len;
	
	i = 0;
	len = ft_strlen(str);
	tmp = malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (0);
	while (str[i])
	{
		tmp[i] = str[i];
		i++;
	}
	tmp [i] = '\0';
	i = 0;
	while (tmp[i])
	{
		write(1, &tmp[i], 1);
		i++;
	}
	free(tmp);
	return (i);
}

int	ft_putnbrn(int num)
{
	char		*str;
	int			i;
	int 		len;
	long int	n;
	
	i = 0;
	n = (long int)num;
	str = ft_itoa(n);
	while (str[i])
		write(1, &str[i++], 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}