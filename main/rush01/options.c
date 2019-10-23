/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 03:36:16 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/07 03:36:20 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*remove_option(char c, char *str)
{
	int		i;
	int		j;
	char	*temp;

	temp = (char*)(malloc(sizeof(char) * 10));
	i = 0;
	j = 0;
	while (str[j])
	{
		if (c != str[j])
			temp[i++] = str[j++];
		else
			j++;
	}
	return (temp);
}

char	*check_cell(int i, int j, char *avail, char **board)
{
	int		x1;
	int		x2;
	int		y1;
	int		y2;
	char	*options;

	x1 = (i / 3) * 3;
	x2 = x1 + 2;
	y1 = (j / 3) * 3;
	y2 = y1 + 2;
	options = avail;
	while (x1 <= x2)
	{
		y1 = (j / 3) * 3;
		while (y1 <= y2)
		{
			if (board[x1][y1] != '.')
				options = remove_option(board[x1][y1], options);
			y1++;
		}
		x1++;
	}
	return (options);
}

char	*check_row(int i, char *avail, char **board)
{
	int		j;
	char	*options;

	j = 0;
	options = avail;
	while (j < 9)
	{
		options = remove_option(board[i][j], options);
		j++;
	}
	return (options);
}

char	*check_col(int j, char *avail, char **board)
{
	int		i;
	char	*options;

	i = 0;
	options = avail;
	while (i < 9)
	{
		options = remove_option(board[i][j], options);
		i++;
	}
	return (options);
}

char	*get_options(int i, int j, char **board)
{
	char	*avail;
	int		x;
	int		y;

	avail = "123456789";
	avail = check_cell(i, j, avail, board);
	avail = check_row(i, avail, board);
	avail = check_col(j, avail, board);
	return (avail);
}
