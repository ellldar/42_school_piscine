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

void	ft_read_by_char(int fd, int num)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];

	while ((ret = read(fd, buf, BUFF_SIZE)))
		buf[ret] = '\0';
	ret = lseek(ret, -num, SEEK_END);
	write(1, buf, num);
}

void	ft_read_by_line(int fd, int num)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];

	fd = lseek(fd, num, SEEK_END);
	while ((ret = read(fd, buf, BUFF_SIZE)))
		buf[ret] = '\0';
	write(1, buf, ret);
}

void	ft_read_files(int argc, char **argv, int read_mode, int num)
{
	int		i;
	int		fd;
	char	*filename;

	errno = 0;
	i = argc == 2 ? 1 : 3;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		printf("%i\n", errno);
		if (fd == -1)
		{
			filename = argv[i];
			write(2, "tail: ", 6);
			write(2, filename, ft_strlen(filename));
			write(2, ": No such file or directory\n", 28);
		}
		else
		{
			if (read_mode == READ_BY_LINE)
				ft_read_by_line(fd, num);
			else if (read_mode == READ_BY_CHAR)
				ft_read_by_char(fd, num);
		}
		fd = close(fd);
		i++;
	}
}
