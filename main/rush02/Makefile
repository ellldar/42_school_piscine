# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esupatae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/13 22:25:52 by esupatae          #+#    #+#              #
#    Updated: 2019/04/13 22:25:55 by esupatae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRCS = main.c helper_funcs.c
OUTS = main.o helper_funcs.o
HDR = includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRCS) -L. -lft -I $(HDR)

debug:
	@gcc -o $(NAME) $(SRCS) -L. -lft -I $(HDR) -g
	@lldb $(NAME)

norm:
	@norminette $(SRCS)

dclean:
	@rm -rf $(NAME).dSYM

clean:
	rm -f $(OUTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
