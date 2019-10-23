/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 03:40:31 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/09 03:40:33 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ans;

	i = 0;
	ans = (int*)(malloc(sizeof(int) * length));
	while (i < length)
	{
		ans[i] = f(tab[i]);
		i++;
	}
	return (ans);
}
