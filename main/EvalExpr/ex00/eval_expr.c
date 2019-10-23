/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 03:36:48 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/14 03:37:19 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int			is_just_number(t_expr_pos pos, char *str)
{
	char	*tmp;
	int		len;
	int		i;

	i = pos.beg;
	len = pos.end - pos.beg + 1;
	tmp = (char*)malloc(sizeof(char) * (len + 1));
	while (i <= pos.end)
	{
		tmp[i - pos.beg] = str[i];
		i++;
	}
	if (ft_strcmp(ft_itoa(ft_atoi(tmp)), tmp) == 0)
		return (1);
	else
		return (0);
}

char		*solve_pair(int pos, char *str)
{
	int		num1;
	int		num2;
	int		beg;
	int		end;
	int		ans;

	num1 = get_prev_num(pos, str, &beg);
	num2 = get_next_num(pos, str, &end);
	ans = solve(num1, num2, str[pos]);
	str = make_newstr(beg, end, str, ft_itoa(ans));
	return (str);
}

char		*solve_simple_expr(t_expr_pos pos, char *str)
{
	int		higher;
	int		i;

	higher = 0;
	i = pos.beg;
	while (i <= pos.end)
	{
		if (str[i] == '*' || str[i] == '/' || str[i] == '%')
		{
			str = solve_pair(i, str);
			higher += 1;
			break ;
		}
		i++;
	}
	if (higher < 1)
	{
		i = pos.beg;
		while (i <= pos.end)
		{
			if (str[i] == '+' || str[i] == '-')
				str = solve_pair(i, str);
			i++;
		}
	}
	return (str);
}

t_expr_pos	find_simple_expr(char *str)
{
	t_expr_pos	pos;
	int			i;

	i = 0;
	pos.beg = i;
	pos.end = ft_strlen(str);
	while (*str)
	{
		if (*str == '(')
			pos.beg = i + 1;
		else if (*str == ')')
		{
			pos.end = i - 1;
			break ;
		}
		str++;
		i++;
	}
	return (pos);
}

int			eval_expr(char *str)
{
	char		*test;
	t_expr_pos	expr_pos;

	test = ft_itoa(ft_atoi(str));
	if (ft_strcmp(test, str) != 0)
	{
		expr_pos = find_simple_expr(str);
		if (is_just_number(expr_pos, str) == 1)
		{
			str = remove_brackets(expr_pos, str);
			expr_pos = find_simple_expr(str);
		}
		str = solve_simple_expr(expr_pos, str);
		return (1 * eval_expr(str));
	}
	else
		return (ft_atoi(str));
}
