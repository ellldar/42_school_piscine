/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:45:35 by exam              #+#    #+#             */
/*   Updated: 2019/04/05 20:45:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	get_number(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n);
}

void	ft_print_combo(int a, int b)
{
	int	res;

	res = a * b;
	ft_putnbr(a);
	ft_putchar(' ');
	ft_putchar('x');
	ft_putchar(' ');
	ft_putnbr(b);
	ft_putchar(' ');
	ft_putchar('=');
	ft_putchar(' ');
	ft_putnbr(res);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	char	*arg;
	int		num;
	int		i;

	if (argc == 2)
	{
		i = 1;
		arg = argv[1];
		num = get_number(arg);
		while (i < 10)
		{
			ft_print_combo(i, num);
			i++;
		}
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}

