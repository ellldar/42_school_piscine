/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 20:24:37 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/30 20:24:41 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else if (power == 0)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d ^ %d = %d\n", 3, 3, ft_recursive_power(3, 3));
	printf("%d ^ %d = %d\n", 5, 0, ft_recursive_power(5, 0));
	printf("%d ^ %d = %d\n", 5, -1, ft_recursive_power(5, -1));
	printf("%d ^ %d = %d\n", 2, 12, ft_recursive_power(2, 12));
	printf("%d ^ %d = %d\n", -7, 3, ft_recursive_power(-7, 3));
	printf("%d ^ %d = %d\n", -3, 0, ft_recursive_power(-3, 0));
	return (0);
}