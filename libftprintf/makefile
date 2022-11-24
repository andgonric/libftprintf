# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 21:11:44 by andgonca          #+#    #+#              #
#    Updated: 2022/11/24 22:26:20 by andgonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_typearg.c ft_printchar.c ft_putstr.c \
	ft_puthex.c ft_putnbr.c ft_putnbr_unsig.c ft_putperc.c

SRC_LIBFT = ./libft
LIBFT = $(SRC_LIBFT)/libft.a

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	ar -rcs $(NAME) $(OBJ) $(LIBFT)

clean:
	rm -f $(OBJ) $(LIBFT)

fclean: clean
	rm -f $(NAME) $(OBJ) $(LIBFT)

re: fclean $(NAME) $(OBJ) $(LIBFT)