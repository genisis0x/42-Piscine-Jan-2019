# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maparmar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/20 23:28:32 by maparmar          #+#    #+#              #
#    Updated: 2019/01/22 19:18:15 by maparmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
		srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = includes/ft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(FILES) -I $(HEADERS)
	ar rc libft.a $(OBJECTS)
	ranlib libft.a

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f  $(NAME)

re: fclean all

.PHONY: clean all
