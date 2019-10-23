/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 02:44:55 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/28 19:42:29 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_one_comb(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_evaluate_comb(char a, char b, char c, char d)
{
	if (a == c && b < d)
	{
		ft_print_one_comb(a, b, c, d);
	}
	else if (a < c)
	{
		ft_print_one_comb(a, b, c, d);
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					ft_evaluate_comb(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	ft_putchar('\b');
	ft_putchar('\b');
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
