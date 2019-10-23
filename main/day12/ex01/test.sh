# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esupatae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 21:09:20 by esupatae          #+#    #+#              #
#    Updated: 2019/04/11 21:11:29 by esupatae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
echo "------ test 1 -------"
diff <(./ft_cat Makefile asdf main.c) <(cat Makefile asdf main.c)| cat -e
echo "------ test 1 -------"
diff <(./ft_cat asdf asdf) <(cat asdf asdf) | cat -e
echo "------ test 1 -------"
diff <(./ft_cat) <(cat) | cat -e
