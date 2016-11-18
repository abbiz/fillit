NAME = fillit

SRC =	main.c

OBJ = $(SRC:.c=.o)

INC = -I libft fillit.h
LIB = -L libft/ -lft
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/ re
	@gcc -o $(NAME) $(OBJ) $(LIB)
	@echo "\033[32;1m> Ready to fillit?\033[0m"

$(OBJ): %.o: %.c
	@gcc $(FLAGS) $(INC) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@echo "\033[31m> Objects files are deleted.\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[31m> $(NAME) is over.\033[0m"

re: fclean all

.PHONY: all clean fclean re
