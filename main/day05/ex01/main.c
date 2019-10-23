/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 00:23:31 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/02 00:46:45 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int num;

	num = nb;
	if (num < 0)
	{
		if (nb == -2147483648)
		{	
			ft_putchar('-');
			ft_putchar('2');
			num = 147483648;
		}
		else
		{
			num = -num;
			ft_putchar('-');
		}
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		ft_putchar(num + '0');
	}
}

int		main(void)
{
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(+1234);
	printf("\n");
	ft_putnbr(-12412);
	printf("\n");
	ft_putnbr(10000);
	printf("\n");
	ft_putnbr(-10000);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	return (0);
}
