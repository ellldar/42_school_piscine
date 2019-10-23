/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 22:32:30 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/16 18:31:42 by esupatae         ###   ########.fr       */
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
	if (nb < 2) {
		return (0);
	}
	else if (nb == (i % nb) + 1)
		return (1);
	return (0);
}

int	main(void)
{
	int	test = -20;
	int	temp;

	while (test < 100000) 
	{
		if (ft_is_prime(test) == 1)
			temp = test;
			//	printf("Is prime %d? %d\n", test, ft_is_prime(test));
		test++;
	}
	printf("The last prime number before 100,000 is %i\n", temp);
	return (0);
}
