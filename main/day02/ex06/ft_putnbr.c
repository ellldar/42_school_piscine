/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 20:11:54 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/28 22:55:34 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
	}
}

void	ft_putnbr(int nb)
{
	int n1;
	int n2;

	if (nb != 0)
	{
		if (nb < 0) 
			n1 = nb * -1;
		else 
			n1 = nb;
		n2 = 0;
		while (n1 > 0)
		{
			n2 = n2 * 10 + (n1 % 10);
			n1 /= 10;
		}
		ft_is_negative(nb);
		while (n2 > 0)
		{
			ft_putchar((n2 % 10) + '0');
			n2 /= 10;
		}
	}
	else
	{
		ft_putchar('0');
	}
}

int		main(void)
{
	ft_putnbr(12345);
	return (0);
}
