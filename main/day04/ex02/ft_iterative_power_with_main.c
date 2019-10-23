/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 20:03:52 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/30 20:03:57 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int counter;
	int result;

	counter = 1;
	result = 1;
	if (power > 0)
	{
		while (counter <= power)
		{
			result *= nb;
			counter++;
		}
		return (result);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	printf("%d ^ %d = %d\n", 3, 3, ft_iterative_power(3, 3));
	printf("%d ^ %d = %d\n", 5, 0, ft_iterative_power(5, 0));
	printf("%d ^ %d = %d\n", 5, -1, ft_iterative_power(5, -1));
	printf("%d ^ %d = %d\n", 2, 12, ft_iterative_power(2, 12));
	return (0);
}
