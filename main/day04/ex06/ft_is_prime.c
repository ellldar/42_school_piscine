/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 22:32:30 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/30 22:32:34 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_modulo_factorial(int nb, int n)
{
	if (nb > 0)
	{
		return ((nb * ft_modulo_factorial(nb - 1, n)) % n);
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int i;

	i = ft_modulo_factorial(nb - 1, nb);
	if (nb < 2)
	{
		return (0);
	}
	else if (nb == (i % nb) + 1)
		return (1);
	return (0);
}

void test(int n)
{
	if(ft_is_prime(n) == 1)
		printf("%d\n", n);
}

int	main(void)
{
	int x = 15000;

	while (x < 100000)
	{
		test(x);
		x++;
	}
}