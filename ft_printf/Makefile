# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 18:38:00 by olengua-          #+#    #+#              #
#    Updated: 2024/10/06 18:38:03 by olengua-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_strlen_int.c \
				ft_printf.c \
				ft_putchar.c \
				ft_putnbr_base.c \
				ft_putnbr_base_p.c \
				ft_putstr.c \

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		@ar -rcs $@ $(OBJS)

%.o : %.c
		@$(CC) -c $(CFLAGS) $<

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
