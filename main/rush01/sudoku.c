/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:08:19 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/06 20:08:23 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_grid(char **nums);
char	**init_board(char **board, char **nums);
char	*remove_option(char c, char *str);
char	*check_cell(int i, int j, char *avail, char **board);
char	*get_options(int i, int j, char **board);

int		solve_sudoku(int pos, char **board)
{
	int		i;
	int		j;
	char	*options;
	int		is_solved;

	i = pos / 10;
	j = pos % 10;
	is_solved = 0;
	if (pos == 89 && board[i][j] != '.')
		return (1);
	options = (char*)(malloc(sizeof(char) * 9));
	while (board[i][j] != '.' && pos <= 89)
	{
		if (pos == 89)
			return (1);
		else if ((pos + 1) % 10 == 9)
			pos++;
		pos++;
		i = pos / 10;
		j = pos % 10;
	}
	options = get_options(i, j, board);
	while (*options)
	{
		is_solved = 0;
		board[i][j] = *options;
		is_solved = solve_sudoku(pos + 1, board);
		if (is_solved)
			return (is_solved);
		options++;
	}
	board[i][j] = '.';
	return (0);
}


void	play_sudoku(char **argv)
{
	char	**board;
	int		is_solved;

	is_solved = 0;
	board = (char**)(malloc(sizeof(char) * 90));
	board = init_board(board, argv);
	is_solved = solve_sudoku(0, board);
	if (is_solved)
		print_grid(board);
	else
		ft_putstr("Error\n");
}

int		main(int argc, char **argv)
{
	char *str;

	if (argc == 10)
	{
		play_sudoku(argv);
	}
	else
	{
		ft_putstr("Error\n");
	}
}
