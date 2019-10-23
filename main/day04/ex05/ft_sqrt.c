/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 21:26:56 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/30 21:27:00 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int n1;
	int n2;
	int x;
	int diff;

	n1 = 0;
	n2 = nb;
	diff = nb;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (diff > 1)
	{
		x = (n2 + n1) / 2;
		if (x * x == nb)
			return (x);
		else if (x * x > nb)
			n2 = x;
		else
			n1 = x;
		diff = n2 - n1;
	}
	return (0);
}
