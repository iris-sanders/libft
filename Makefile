NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
INCL		= libft.h

SRC			=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \



OFILES		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OFILES) $(HEADER)
	ar rcs $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean make fclean re