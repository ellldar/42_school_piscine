/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 03:11:16 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/16 03:11:19 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFF_SIZE	100

typedef struct	s_opts
{
	int		i;
	int		nlines;
	int		linelen;
	char	spcsym;
	char	obstsym;
	char	boxsym;
}				t_opts;

typedef struct	s_bsq
{
	int		num;
	int		x;
	int		y;
}				t_bsq;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(char *str);
char			*ft_itoa(int nb);

void			exit_if_less(int n1, int n2);
void			exit_if_not_equal(int n1, int n2);
int				read_single_file(int fd, char **buf);
void			read_files(int fnum, char **fnames);

void			put_bsq_to_arr(char ***arr, t_bsq bsq, t_opts opts);
void			find_bsq(char **arr, t_opts opts, t_bsq *bsq);
void			populate_arr_from_file(int *fd, char ***arr,
				t_opts opts, char **buf);
char			**build_arr(char *filename, t_opts opts, int size);
char			**init_n_solve(char *filename, int size);

void			exit_with_error();
char			assign_validate(char c, t_opts opts);
void			init_options(t_opts *opts);
t_opts			assign_options(char *options, int line_length);
t_opts			get_options(char *filename, t_opts cond);

int				find_min(int n1, int n2, int n3);
t_bsq			assign_bsq(int num, int x, int y);
int				skip_first_line(int fd, char **buf);
void			output_msg(char *msg, char *arg);
void			print_array(char **arr);

#endif
