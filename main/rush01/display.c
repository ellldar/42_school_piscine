/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 22:43:21 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/06 22:43:24 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	print_grid(char **nums)
{
	char	*word;
	int		i;

	while (*nums)
	{
		i = 0;
		word = *nums;
		while (word[i] != '\0')
		{
			ft_putchar(word[i]);
			i++;
			if (word[i])
				ft_putchar(' ');
		}
		ft_putchar('\n');
		nums++;
	}
}

char	**init_board(char **board, char **nums)
{
	char	*row;
	int		i;
	int		j;

	nums++;
	i = 0;
	while (*nums)
	{
		j = 0;
		row = *nums;
		board[i] = (char*)(malloc(sizeof(char) * 10));
		while (row[j] != '\0')
		{
			board[i][j] = row[j];
			j++;
		}
		board[i][j] = '\0';
		nums++;
		i++;
	}
	return (board);
}
