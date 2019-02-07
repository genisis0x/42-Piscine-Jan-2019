
NAME = bsq

SRC = srcs/main.c srcs/functions.c srcs/functions2.c srcs/ft_start.c \
	  srcs/ft_check_instructions.c srcs/ft_board.c srcs/ft_optimizations.c

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror  -o $(NAME) $(SRC)
clean:
		/bin/rm -f
fclean: clean
		/bin/rm -f $(NAME)
re: fclean all
