# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchapman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 17:19:44 by bchapman          #+#    #+#              #
#    Updated: 2019/01/29 17:54:43 by bchapman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= bsq
DEPS= bbq.h
SRCF= bbq.c
CFLAGS= -I $(INCLUDES) -Wall -Wextra -Werror
INCLUDES= includes/


all: $(NAME)

$(NAME):
	gcc -o $@ $(SRCF) $(CFLAGS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
