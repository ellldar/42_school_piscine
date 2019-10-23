/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:32:56 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/04 15:33:01 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int	*nums;
	int	i;

	i = min;
	if (min < max)
	{
		nums = (int*)(malloc(sizeof(*nums) * (max - min - 1)));
		while (i < max)
		{
			printf("%i ", i);
			nums[i - min] = i;
			i++;
		}
		printf("\n");
	}
	return (nums);
}

int		main(void)
{
	int	*a;

	a = ft_range(2, 5);
	a = ft_range(0, 10);
	a = ft_range(-10, 10);
	a = ft_range(10, 20);
	return (0);
}
