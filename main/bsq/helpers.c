/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 03:13:03 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/16 03:13:05 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	exit_if_less(int n1, int n2)
{
	if (n1 < n2)
		exit_with_error();
}

void	exit_if_not_equal(int n1, int n2)
{
	if (n1 != n2)
		exit_with_error();
}

int		read_single_file(int fd, char **buf)
{
	int		ret;
	int		size;
	char	*tmp_buf;

	size = 0;
	tmp_buf = *buf;
	while ((ret = read(fd, tmp_buf, 1)))
	{
		size += ret;
		tmp_buf[ret] = '\0';
	}
	return (size);
}

void	read_files(int fnum, char **fnames)
{
	char	*buf;
	char	**arr;
	int		size;
	int		fd;
	int		i;

	i = 1;
	while (i < fnum)
	{
		fd = open(fnames[i], O_RDONLY);
		if (fd != -1)
		{
			buf = (char*)(malloc(sizeof(char) * (BUFF_SIZE + 1)));
			if ((size = read_single_file(fd, &buf)) > 0)
			{
				fd = close(fd);
				arr = init_n_solve(fnames[i], size);
			}
		}
		else
			output_msg("Error: File not found: ", fnames[i]);
		fd = close(fd);
		i++;
	}
}
