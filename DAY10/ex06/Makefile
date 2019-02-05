# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maparmar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 18:09:39 by maparmar          #+#    #+#              #
#    Updated: 2019/01/22 21:34:14 by maparmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

FILES = main.c helper.c op.c

HEADERS = ft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(FILES) -I $(HEADERS)

clean:
	rm -f $(OBJECTS) $(NAME)

fclean: clean
	rm -f  $(NAME)

re: fclean all

.PHONY: clean all
