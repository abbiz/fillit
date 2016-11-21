NAME = fillit

SRC =	main.c

LIB = lft
FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC)
	@gcc $(OBJ) -L. -$(LIB) -o $(NAME)
	@echo "\033[32;1m> $(NAME) is on.\n> Ready to fillit?\033[0m"

clean:
	@rm -f $(OBJ)
	@echo "\033[31m> Objects files are deleted.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31m> $(NAME) is off.\033[0m"

re: fclean all

.PHONY: all clean fclean re
