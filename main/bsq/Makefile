# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esupatae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/15 22:22:07 by esupatae          #+#    #+#              #
#    Updated: 2019/04/15 22:22:26 by esupatae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

NAME = bsq
SRC = main.c helpers.c utils.c init_array.c options.c
OUT = main.o helpers.o utils.o init_array.o options.o
HDR = includes/
FLG = -Wall -Wextra -Werror
MAPFILE = map.mp
MAPGENFILE = genmap.pl
MAPOPTIONS = 25 15 2
TMPFILE = temp_map.mp
GIT_FILES = Makefile genmap.pl libft.a author includes/*.h $(SRC)

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -L. -lft -I $(HDR)

flags:
	gcc -o $(NAME) $(SRC) -L. -lft -I $(HDR) $(FLG)

clean:
	rm -f $(OUT)

fclean: clean
	rm -f $(NAME)

re: fclean all

run:
	@./$(NAME) $(MAPFILE) | cat -e

run_random:
	@perl $(MAPGENFILE) $(MAPOPTIONS) > $(TMPFILE)
	@./$(NAME) $(TMPFILE) | cat -e
	@rm -f $(TMPFILE)

map:
	@perl $(MAPGENFILE) $(filter-out $@,$(MAKECMDGOALS)) > $(MAPFILE)
	@echo "New map generated and written into" $(MAPFILE)

mclean:
	rm -f $(MAPFILE)

remap: mclean map

git_add:
	git add $(GIT_FILES)

debug:
	gcc -o $(NAME) $(SRC) -L. -lft -I $(HDR) -g
	lldb $(NAME)

dclean:
	@rm -rf $(NAME).dSYM

norm:
	norminette $(SRC) $(HDR)*.h

%:
	@: