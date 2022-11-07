/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:24:24 by mbozzi            #+#    #+#             */
/*   Updated: 2022/11/07 19:12:10 by mbozzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *ktm, ...);
int		ft_strlen(const char *str);
int		ft_putchar(int c);
int		ft_putstrn(char *str);
int		ft_putnbrn (int num);
char	*ft_itoa(long int n);
int		ft_unsign(int num);
int		ft_hexa(long int num, const char ktm);
int		ft_putnbr_base(long int nbr, char *base);

#endif