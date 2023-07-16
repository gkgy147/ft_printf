# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grobert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 20:12:47 by grobert           #+#    #+#              #
#    Updated: 2022/11/12 17:06:54 by grobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRCS=	ft_printf.c ft_putaddr.c ft_putchar.c ft_putnbr.c \
	ft_putnbr_base.c ft_putstr.c ft_putnbr_long.c

OBJS	= ${SRCS:%.c=%.o}

FLAGS	= -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c  $(SRCS) -I ./
	ar rc $(NAME) $(OBJS) 



all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
