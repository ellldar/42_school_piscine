# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esupatae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/14 03:36:06 by esupatae          #+#    #+#              #
#    Updated: 2019/04/14 03:36:09 by esupatae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRCS = main.c eval_expr.c operations.c solvers.c
OUTS = main.o eval_expr.o operations.o solvers.o
HDR = includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRCS) -L. -lft -I $(HDR) $(FLAGS)

debug:
	@gcc -o $(NAME) $(SRCS) -L. -lft -I $(HDR) -g
	@lldb $(NAME)

norm:
	@norminette $(SRCS)

dclean:
	@rm -rf *.dSYM

clean:
	rm -f $(OUTS)

fclean: clean dclean
	rm -f $(NAME)

re: fclean all

redebug: dclean debug