/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 20:26:45 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/31 20:26:48 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_spaces(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(' ');
		i++;
	}
}

int		calc_spaces(int n)
{
	
}

void	ft_print_block(int block_no, int size)
{
	int	spaces;
	int sub_blocks;
	int base_inc;
	int i;
	int m;

	spaces = calc_spaces(size);
	sub_blocks = size + 2;
	i = 0;
	while (i < sub_blocks)
	{
		ft_print_spaces(spaces);
		ft_putchar('/');
		ft_putchar('\n');
		spaces--;
		i++;
	}
}

void	sastantua(int size)
{
	int i;

	while (i < size)
	{
		ft_print_block(i, size);
		i++;
	}
}
