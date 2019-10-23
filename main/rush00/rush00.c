/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 16:47:19 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/31 16:47:21 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int y, int x)
{
	int i;
	int j;

	if (y < 0)
		return ;
	i = 1;
	while (i <= x)
	{
		j = 1;
		while (j <= y)
		{
			if ((i == 1 && j == 1) || (i == 1 && j == y) ||
				(i == x && j == 1) || (i == x && j == y))
				ft_putchar('o');
			else if ((i == 1 || i == x) && j != 1 && j != y)
				ft_putchar('-');
			else if (i != 1 && i != x && (j == 1 || j == y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
