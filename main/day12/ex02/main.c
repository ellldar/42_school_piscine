/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 21:37:26 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/11 21:39:06 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (ft_strcmp(argv[1], "-c") == 0)
		{
			if (argv[2])
			{
				if (ft_strcmp(ft_itoa(ft_atoi(argv[2])), argv[2]) == 0)
					ft_read_files(argc, argv, READ_BY_CHAR, ft_atoi(argv[2]));
				else
				{
					write(2, "tail: illegal offset -- ", 24);
					write(2, argv[2], ft_strlen(argv[2]));
					write(2, "\n", 1);
				}
			}
			else
			{
				write(2, "tail: option requires an argument -- c\n", 39);
				write(2, "usage: tail [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n", 65);
			}
		}
		else
			ft_read_files(argc, argv, READ_BY_LINE, 10);
	}
	return (0);
}
