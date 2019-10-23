/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:20:41 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/11 19:21:29 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(int argc, char **argv)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];

	if (argc < 2)
	{
		while (1)
		{
			ret = read(0, buf, BUFF_SIZE);
			buf[ret] = '\0';
			write(1, buf, ret);
		}
	}
	else
	{
		ft_read_files(argc, argv);
	}
	return (0);
}
