/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:11:32 by exam              #+#    #+#             */
/*   Updated: 2019/04/05 19:43:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	print_last_word(char *str, int i, int j)
{
	while (i <= j)
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int	i;
	int j;
	char *arg;

	if (argc == 2)
	{
		arg = argv[1];
		j = ft_strlen(arg) - 1;
		i = j;
		while ((arg[j] == ' ' || arg[j] == '\t') && j >= 0)
			j--;
		i = j;
		while (arg[i] != ' ' && arg[i] != '\t' && i >=0)
			i--;
		i++;
		print_last_word(arg, i, j);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}

