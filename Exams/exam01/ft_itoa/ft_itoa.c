/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:51:10 by exam              #+#    #+#             */
/*   Updated: 2019/04/05 21:53:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		get_size(int nb)
{
	if (nb > 9)
		return (1 + get_size(nb / 10));
	else
		return (1);
}

int		ft_sqr(int base, int power)
{
	int res;
	int	i;

	res = 1;
	i = 0;
	while (i < power)
	{
		res = res * base;
		i++;
	}
	return (res);
}

char	*ft_itoa(int nbr)
{
	char	*temp;
	int		size;
	int		i;
	int		extra;

	if (nbr == -2147483648)
		size = 10;
	else
		size = (nbr < 0) ? get_size(-nbr) : get_size(nbr);
	extra = (nbr < 0) ? 2 : 1;
	size += extra;
	temp = (char*)malloc(sizeof(char) * size);
	i = 0;
	if (nbr < 0)
	{
		temp[i] = '-';
		if (nbr == -2147483648)
		{
			i++;
			temp[i] = '2';
			nbr = -147483648;
		}
		nbr = -nbr;
		i++;
	}
	while (i < size - 1)
	{
		temp[i] = (nbr / ft_sqr(10, (size - i - 2))) % 10 + '0';
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

int		main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}