# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esupatae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 17:43:46 by esupatae          #+#    #+#              #
#    Updated: 2019/04/03 17:54:40 by esupatae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
rm -rf *.o
gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_atoi.c ft_putnbr.c ft_strcpy.c ft_strncpy.c ft_itoa.c
ar rc libft.a *.o
rm -rf *.o
ranlib libft.a
