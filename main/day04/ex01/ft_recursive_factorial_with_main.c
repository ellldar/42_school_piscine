/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:16:31 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/30 16:19:03 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb) {
	if (nb > 0 && nb < 13) {
		return (nb * ft_recursive_factorial(nb - 1));
	} 
	else if (nb == 0) 
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	int n = -5;

	while (n < 20) 
	{
		printf("Factorial of %d - %d\n", n, ft_recursive_factorial(n));
		n++;
	}
	return (0);
}
