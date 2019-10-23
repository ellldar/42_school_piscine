/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:29:33 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/04 17:29:35 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nums;
	int	i;

	i = min;
	if (min < max)
	{
		nums = (int*)(malloc(sizeof(*nums) * (max - min)));
		while (i < max)
		{
			nums[i - min] = i;
			i++;
		}
	}
	else
		return (NULL);
	return (nums);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int	size;

	if (min < max)
	{
		*range = ft_range(min, max);
		i = min;
		size = 0;
		while (i < max)
		{
			size++;
			i++;
		}
	}
	else
		return (0);
	return (size);
}
