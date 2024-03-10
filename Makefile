# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/01 23:04:26 by imatakis          #+#    #+#              #
#    Updated: 2024/03/10 02:46:40 by imatakis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_printf.c print_char.c print_str.c print_nbr.c print_ptr.c print_hex.c print_unbr.c \

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

$(NAME): $(OBJ) 
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
