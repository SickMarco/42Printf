/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:05:37 by mbozzi            #+#    #+#             */
/*   Updated: 2022/11/06 23:43:21 by mbozzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrn (int num)
{
	char	*str;
	int		i;
	int 	len;
	
	i = 0;
	str = ft_itoa(num);
	while (str[i])
		write(1, &str[i++], 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}