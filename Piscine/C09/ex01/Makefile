# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbyrne <mbyrne@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 14:39:56 by mbyrne            #+#    #+#              #
#    Updated: 2024/09/23 14:39:59 by mbyrne           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
CC = cc
SOURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c \
		srcs/ft_strlen.c srcs/ft_strcmp.c
OBJECT = $(SOURCES:.c=.o)
HEADER = includes/ft.h
LIB = libft.a
RM = rm -f

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -I includes -c $< -o $@

$(LIB): $(OBJECT)
	ar -rcs $(LIB) $(OBJECT)

all: $(LIB)

clean:
	$(RM) $(OBJECT)

fclean: clean
	$(RM) $(LIB)

re: fclean all

.PHONY: all clean fclean re

