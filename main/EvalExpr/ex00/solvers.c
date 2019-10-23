/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solvers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 06:15:26 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/14 06:15:29 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		solve(int n1, int n2, char op)
{
	int				i;
	const t_func	any_func[6] = {{'+', &add}, {'-', &substr},
		{'*', &mult}, {'/', &divis}, {'%', &mod}};

	i = 0;
	while (i < 6)
	{
		if (any_func[i].op == op)
			return (any_func[i].f(n1, n2));
		i++;
	}
	return (0);
}

int		get_prev_num(int pos, char *str, int *beg)
{
	int		i;
	int		j;
	char	*strnum;

	i = pos - 1;
	strnum = (char*)(malloc(sizeof(char) * ft_strlen(str)));
	while (str[i] == ' ')
		i--;
	while (str[i] >= '0' && str[i] <= '9')
		i--;
	*beg = i + 1;
	i++;
	j = i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		strnum[i - j] = str[i];
		i++;
	}
	return (ft_atoi(strnum));
}

int		get_next_num(int pos, char *str, int *end)
{
	int		i;
	char	*strnum;

	i = pos + 1;
	strnum = (char*)(malloc(sizeof(char) * ft_strlen(str)));
	while (str[i] == ' ')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		strnum[i - pos - 1] = str[i];
		i++;
	}
	*end = i - 1;
	return (ft_atoi(strnum));
}

char	*make_newstr(int beg, int end, char *str, char *ans)
{
	char	*tmp;
	int		diff;
	int		i;
	int		size;

	i = 0;
	diff = end - beg + 1;
	size = ft_strlen(str) - diff + ft_strlen(ans);
	tmp = (char*)malloc(sizeof(char) * size);
	while (i < beg)
	{
		tmp[i] = str[i];
		i++;
	}
	while (i < (beg + ft_strlen(ans)))
	{
		tmp[i] = ans[i - beg];
		i++;
	}
	while (i < ft_strlen(str) - diff + ft_strlen(ans))
	{
		tmp[i] = str[i + diff - ft_strlen(ans)];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	*remove_brackets(t_expr_pos pos, char *str)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	tmp = (char*)malloc(sizeof(char) * ft_strlen(str));
	while (i < ft_strlen(str))
	{
		if (j == pos.beg - 1 || j == pos.end + 1)
			j++;
		tmp[i] = str[j];
		i++;
		j++;
	}
	tmp[i] = '\0';
	return (tmp);
}
