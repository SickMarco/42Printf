#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *ktm, ...);
int	ft_strlen(const char *str);
void	ft_putchar(int c);
int	ft_putstrn(char *str);
int	ft_putnbrn (int num);
char	*ft_itoa(int n);

#endif