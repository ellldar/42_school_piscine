/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:04:18 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/29 14:04:21 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "mylib.h"

void	ft_swap(int *a, int *b)
{
	int c;
	int *ptr;

	ptr = &c;
	*ptr = *a;
	*a = *b;
	*b = *ptr;
}

int		main(void)
{
	int	n1;
	int	n2;
	int *ptr1;
	int *ptr2;

	n1 = 12;
	ptr1 = &n1;
	n2 = 15;
	ptr2 = &n2;
	ft_putnbr(*ptr1);
	ft_putchar(',');
	ft_putnbr(*ptr2);
	ft_putchar('\n');
	ft_swap(ptr1, ptr2);
	ft_putnbr(*ptr1);
	ft_putchar(',');
	ft_putnbr(*ptr2);
	ft_putchar('\n');
	return (0);
}
