/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 04:28:15 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/17 04:28:17 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	exit_with_error(void)
{
	write(2, "map error\n", 10);
	exit(EXIT_SUCCESS);
}

char	assign_validate(char c, t_opts opts)
{
	if (c != opts.spcsym && c != opts.obstsym && c != opts.boxsym)
		exit_with_error();
	return (c);
}

void	init_options(t_opts *opts)
{
	opts->i = 0;
	opts->nlines = 0;
	opts->linelen = 0;
	opts->spcsym = '.';
	opts->obstsym = 'o';
	opts->boxsym = 'x';
}

t_opts	assign_options(char *options, int line_length)
{
	t_opts	opts;

	opts.nlines = ft_atoi(options);
	opts.linelen = line_length;
	opts.spcsym = options[ft_strlen(ft_itoa(opts.nlines))];
	opts.obstsym = options[ft_strlen(ft_itoa(opts.nlines)) + 1];
	opts.boxsym = options[ft_strlen(ft_itoa(opts.nlines)) + 2];
	return (opts);
}

t_opts	get_options(char *filename, t_opts opts)
{
	int		i;
	int		fd;
	int		ret;
	char	*buf;
	char	*options;

	i = 0;
	buf = (char*)(malloc(sizeof(char) * 2));
	options = (char*)(malloc(sizeof(char) * 14));
	fd = open(filename, O_RDONLY);
	while ((ret = read(fd, buf, 1)))
	{
		options[i] = buf[0];
		buf[ret] = '\0';
		i++;
		if (buf[0] == '\n')
			break ;
	}
	i = 0;
	while ((ret = read(fd, buf, 1)) && buf[0] != '\n')
		i++;
	exit_if_less(i, 1);
	fd = close(fd);
	opts = assign_options(options, i);
	return (opts);
}
