NAME = libft.a
BONUS_NAME = .bonus

SOURCES =		ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c \
				ft_atoi.c ft_isprint.c ft_striteri.c ft_strnstr.c \
				ft_bzero.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c \
				ft_calloc.c ft_memchr.c ft_strlcat.c ft_strtrim.c \
				ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c \
				ft_isalpha.c ft_memcpy.c ft_strlen.c ft_tolower.c ft_split.c \
				ft_isascii.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_checkformat.c ft_freear.c ft_putchar_pf.c ft_putunbr_pf.c \
				ft_puthex_pf.c ft_putnbr_pf.c ft_putstr_pf.c ft_putvoid_pf.c \
				ft_vargscount.c ft_printf.c get_next_line.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror
REMOVE = rm -f
CC = cc

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	$(REMOVE) $(OBJECTS) $(BONUS_OBJS)

fclean: clean
	$(REMOVE) $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re bonus