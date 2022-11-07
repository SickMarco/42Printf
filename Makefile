# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbozzi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 15:51:15 by mbozzi            #+#    #+#              #
#    Updated: 2022/11/06 19:29:28 by mbozzi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf.c ft_strlen.c ft_putchar.c ft_putstrn.c ft_putnbrn.c \
					ft_itoa.c
OBJS			= $(SRCS:.c=.o)

BONUS			=	

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
