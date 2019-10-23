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

int		*ft_range(int min, int max)
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
