NAME = push_swap

SOURCES = *.c

REMOVE = rm
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LIBFT = libft/libft.a

all: $(NAME)

$(NAME):
	@echo "Compiling Libft..."
	@cd libft/ && make -s
	@cd ../
	@echo "Compiling executable..."
	@$(CC) $(CFLAGS) $(SOURCES) -o $(NAME) $(LIBFT)
	@echo "Executable compiled successfully!"

clean:
	@echo "Cleaning Libft folder..."
	@cd libft/ && make clean -s
	@test -f $(LIBFT) && $(REMOVE) $(LIBFT) && echo "Libft deleted successfully!" || echo "Libft already deleted!"
	@cd ../

fclean: clean
	@test -f $(NAME) && $(REMOVE) $(NAME) && echo "Executable deleted successfully!" || echo "Executable already deleted!"

re: fclean all

.PHONY: all clean fclean re
