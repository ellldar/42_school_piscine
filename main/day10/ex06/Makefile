# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esupatae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/09 15:48:58 by esupatae          #+#    #+#              #
#    Updated: 2019/04/09 15:49:01 by esupatae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = main.c operations.c
HEADER = includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRCS) -L. -lft -I $(HEADER) $(FLAGS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all