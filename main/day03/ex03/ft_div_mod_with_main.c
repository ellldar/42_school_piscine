/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:27:47 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/29 14:27:56 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "mylib.h"

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a;
	int b;
	int result;
	int remainder;
	int *result_pointer;
	int *remainder_pointer;

	a = 17;
	b = 7;
	result_pointer = &result;
	remainder_pointer = &remainder;
	ft_div_mod(a, b, result_pointer, remainder_pointer);
	ft_putnbr(a);
	ft_putchar(',');
	ft_putnbr(b);
	ft_putchar(' ');
	ft_putchar('-');
	ft_putchar('>');
	ft_putchar(' ');
	ft_putnbr(result);
	ft_putchar(',');
	ft_putnbr(remainder);
	ft_putchar('\n');
	return (0);
}
