# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esupatae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/08 22:28:49 by esupatae          #+#    #+#              #
#    Updated: 2019/04/08 22:43:48 by esupatae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
BIN = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HDR = includes/

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HDR)
	ar rc $(NAME) $(BIN)
	rm -rf $(BIN)
	ranlib $(NAME)

clean:
	/bin/rm -f $(BIN)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
