/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:45:29 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/29 14:45:31 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "mylib.h"

void ft_ultimate_div_mod(int *a, int *b)
{
	int n1;
	int n2;

	n1 = *a;
	n2 = *b;
	*a = n1 / n2;
	*b = n1 % n2;
}

int	main(void)
{
	int a;
	int b;
	int *ptr1;
	int	*ptr2;

	a = 11;
	b = 4;
	ptr1 = &a;
	ptr2 = &b;
	ft_putnbr(a);
	ft_putchar(',');
	ft_putnbr(b);
	ft_putchar(' ');
	ft_putchar('-');
	ft_putchar('>');
	ft_putchar(' ');
	ft_ultimate_div_mod(ptr1, ptr2);
	ft_putnbr(a);
	ft_putchar(',');
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}
