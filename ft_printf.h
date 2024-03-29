/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:24:24 by mbozzi            #+#    #+#             */
/*   Updated: 2022/11/08 15:22:51 by mbozzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(const char *ktm, ...);
int		ft_strlen(const char *str);
int		ft_putchar(int c);
int		ft_putstrn(char *str);
int		ft_putptrn(uintptr_t ptr);
int		ft_putnbrn(int num);
char	*ft_itoa(long int n);
int		ft_unsign(int num);
int		ft_hexa(unsigned int num, const char ktm);
int		ft_putnbr_base(unsigned int nbr, char *base);

#endif
