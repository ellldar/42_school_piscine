/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:11:06 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/16 18:11:08 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		find_min(int n1, int n2, int n3)
{
	int	min;

	min = 0;
	min = n1 < n2 ? n1 : n2;
	min = min < n3 ? min : n3;
	return (min);
}

t_bsq	assign_bsq(int num, int x, int y)
{
	t_bsq	tmp;

	tmp.num = num;
	tmp.x = x;
	tmp.y = y;
	return (tmp);
}

int		skip_first_line(int fd, char **buf)
{
	int		ret;
	char	*tmp_buf;

	tmp_buf = *buf;
	while ((ret = read(fd, tmp_buf, 1)))
	{
		tmp_buf[ret] = '\0';
		if (tmp_buf[0] == '\n')
			break ;
	}
	return (fd);
}

void	output_msg(char *msg, char *arg)
{
	write(2, msg, ft_strlen(msg));
	write(2, arg, ft_strlen(arg));
	write(2, "\n", 1);
}

void	print_array(char **arr)
{
	char *row;

	while (*arr)
	{
		row = *arr;
		while (*row)
		{
			ft_putchar(*row);
			row++;
		}
		ft_putchar('\n');
		arr++;
	}
}
