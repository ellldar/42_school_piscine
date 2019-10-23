/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 03:42:42 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/14 03:42:45 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <stdlib.h>
# include <stdio.h>

typedef int		(*t_funcptr)(int, int);

typedef	struct	s_expr_pos
{
	int	beg;
	int	end;
}				t_expr_pos;

typedef	struct	s_func
{
	char		op;
	t_funcptr	f;
}				t_func;

void			ft_putchar(char c);
void			ft_putnbr(int nb);
int				ft_atoi(const char *str);
char			*ft_itoa(int nbr);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);

int				is_just_number(t_expr_pos pos, char *str);
char			*solve_pair(int	pos, char *str);
int				get_prev_num(int pos, char *str, int *beg);
int				get_next_num(int pos, char *str, int *end);
t_expr_pos		find_simple_expr(char *str);
int				eval_expr(char *str);

char			*make_newstr(int beg, int end, char *str, char *ans);
int				solve(int n1, int n2, char op);
char			*remove_brackets(t_expr_pos pos, char *str);

int				add(int a, int b);
int				substr(int a, int b);
int				mult(int a, int b);
int				divis(int a, int b);
int				mod(int a, int b);

#endif
