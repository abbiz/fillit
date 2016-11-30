# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mneboth <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/25 20:10:02 by mneboth           #+#    #+#              #
#    Updated: 2016/11/30 08:10:13 by abizeau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC =		sources/main.c \
			sources/check_file.c \
			sources/resolve.c \
			sources/tetriminos.c

OBJ = $(SRC:.c=.o)
INC = -I libft -I includes
LIB = -L libft/ -lft
FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJ)
	@make -C libft/ re
	@gcc -o $(NAME) $(OBJ) $(LIB)
	@echo "\033[32;1m> $(NAME) is on.\n> Ready to fillit?\033[0m"

$(OBJ): %.o: %.c
	@gcc $(FLAGS) $(INC) -c $< -o $@

all:		$(NAME)

clean:
	@rm -f $(OBJ)
	@make -C libft/ clean
	@echo "\033[31m> Objects files are deleted.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@make -C libft/ fclean
	@echo "\033[31m> $(NAME) is off.\033[0m"

re: fclean all

.PHONY: all clean fclean re
