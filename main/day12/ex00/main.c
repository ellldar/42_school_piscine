/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:02:02 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/11 18:02:17 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc < 2)
		write(2, "File name missing.\n", 19);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			write(2, "File doesn't exist.\n", 20);
		else
		{
			while ((ret = read(fd, buf, BUFF_SIZE)))
			{
				buf[ret] = '\0';
				ft_putstr(buf);
			}
			fd = close(fd);
		}
	}
	return (0);
}
