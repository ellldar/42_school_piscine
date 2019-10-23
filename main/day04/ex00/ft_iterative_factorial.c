/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 15:43:50 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/30 15:43:58 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int counter;
	int	result;

	counter = 1;
	result = 1;
	if (nb > 0 && nb < 13)
	{
		while (counter <= nb)
		{
			result *= counter;
			counter++;
		}
		return (result);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
