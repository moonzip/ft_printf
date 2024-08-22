# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucmart3 <lucmart3@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 07:37:00 by lucmart3          #+#    #+#              #
#    Updated: 2024/05/27 19:36:34 by lucmart3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FILES = ft_printf.c \
        ft_nosigne.c \
        ft_numhex.c \
        ft_pointer.c \
        ft_putcharf.c \
        ft_putnbrf.c \
        ft_putstrf.c

OBJ = $(FILES:.c=.o)

CC = clang
RM = @rm -f
FLAGS = -Wall -Werror -Wextra
AR = ar crs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	$(CC) main.c $(NAME) -o test_executable

.PHONY: all re clean fclean test
