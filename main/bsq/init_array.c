/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:59:45 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/16 18:59:48 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	put_bsq_to_arr(char ***arr, t_bsq bsq, t_opts opts)
{
	int		i;
	int		j;
	char	**tmp;

	tmp = *arr;
	i = bsq.x - bsq.num + 1;
	while (i <= bsq.x)
	{
		j = bsq.y - bsq.num + 1;
		while (j <= bsq.y)
			tmp[i][j++] = opts.boxsym;
		i++;
	}
}

void	find_bsq(char **arr, t_opts opts, t_bsq *bsq)
{
	int		i;
	int		j;
	int		ans[opts.nlines][opts.linelen];

	i = 0;
	(*bsq).num = 0;
	while (i < opts.nlines)
	{
		j = 0;
		while (j < opts.linelen)
		{
			if ((i == 0 || j == 0) && arr[i][j] != opts.obstsym)
				ans[i][j] = 1;
			else if (arr[i][j] == opts.obstsym)
				ans[i][j] = 0;
			else
				ans[i][j] = find_min(ans[i - 1][j], ans[i][j - 1],
							ans[i - 1][j - 1]) + 1;
			if (ans[i][j] > (*bsq).num)
				(*bsq) = assign_bsq(ans[i][j], i, j);
			j++;
		}
		i++;
	}
}

void	populate_arr_from_file(int *fd, char ***arr, t_opts opts, char **buf)
{
	int		j;
	int		newlines;

	newlines = 0;
	while (opts.i < opts.nlines)
	{
		j = 0;
		(*arr)[opts.i] = (char*)(malloc(sizeof(char) * (opts.linelen + 1)));
		while (j <= opts.linelen)
		{
			if ((read(*fd, *buf, 1)))
			{
				if ((*buf)[0] != '\n')
					(*arr)[opts.i][j] = assign_validate((*buf)[0], opts);
				else if ((*buf)[0] == '\n' && newlines++)
					exit_if_not_equal(j, opts.linelen);
				(*buf)[1] = '\0';
			}
			j++;
		}
		opts.i++;
	}
	exit_if_not_equal(opts.i, newlines);
	(*arr)[opts.i] = 0;
}

char	**build_arr(char *filename, t_opts opts, int size)
{
	int		i;
	int		fd;
	char	*buf;
	char	**tmp_arr;

	i = 0;
	buf = (char*)(malloc(sizeof(char) * 2));
	fd = open(filename, O_RDONLY);
	fd = skip_first_line(fd, &buf);
	tmp_arr = (char**)(malloc(sizeof(char) * (size + 1)));
	populate_arr_from_file(&fd, &tmp_arr, opts, &buf);
	fd = close(fd);
	return (tmp_arr);
}

char	**init_n_solve(char *filename, int size)
{
	char	**arr;
	t_opts	options;
	t_bsq	bsq;

	init_options(&options);
	options = get_options(filename, options);
	arr = build_arr(filename, options, size);
	find_bsq(arr, options, &bsq);
	put_bsq_to_arr(&arr, bsq, options);
	print_array(arr);
	return (arr);
}
