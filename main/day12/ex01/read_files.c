/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:55:14 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/11 19:55:35 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdio.h>

void	ft_read_file(int fd)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];

	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

void	ft_read_files(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*filename;

	i = 1;
	errno = 0;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		printf("%i\n", errno);
		if (fd == -1)
		{
			filename = argv[i];
			write(2, "cat: ", 5);
			write(2, filename, ft_strlen(filename));
			write(2, ": No such file or directory\n", 28);
		}
		else
		{
			ft_read_file(fd);
		}
		fd = close(fd);
		i++;
	}
}
