/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 23:03:12 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/29 23:03:19 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	n;
	int	result;
	int	is_negative;

	n = 0;
	result = 0;
	is_negative = 1;
	while (str[n] != '\0')
	{
		if (str[n] >= '0' && str[n] <= '9')
		{
			result = (result * 10 + str[n]) - 48;
		}
		else if (str[n] != ' ' && str[n] != '-')
		{
			break ;
		}
		else if (str[n] == '-')
		{
			is_negative = -1;
		}
		n++;
	}
	return (result * is_negative);
}
