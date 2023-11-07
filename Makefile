# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: irsander <irsander@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/10 16:36:41 by irsander      #+#    #+#                  #
#    Updated: 2023/11/05 17:51:36 by irissanders   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

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
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_itoa.c \

BONUS		=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \

OFILES		= $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OFILES) $(HEADER)
	ar rcs $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

bonus: $(BONUS:.c=.o)
	ar -r $(NAME) $^
	
clean:
	rm -rf $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean make fclean re