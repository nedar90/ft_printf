# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 11:44:32 by nrajabia          #+#    #+#              #
#    Updated: 2023/02/21 12:06:51 by nrajabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c\ ft_putstr.c\ ft_putchar.c\
		ft_putnbr.c\ ft_hexnbr.c\ ft_length.c\ ft_printnum.c

OBJS = $(addsuffix .o, $(basename $(SRCS)))

CFLAGS = -Wall -Werror -Wextra

.c.o:
		cc $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		ar -crs $@ $^

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
