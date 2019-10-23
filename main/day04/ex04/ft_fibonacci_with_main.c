/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 20:45:44 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/30 20:45:48 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else 
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

int	main(void)
{
	int n = -5;

	while (n < 20)
	{
		printf("%d-nth number is -> %d\n", n, ft_fibonacci(n));
		n++;
	}
	return (0);
}