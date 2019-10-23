/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 05:30:47 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/02 21:27:03 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_atoi(const char *str)
{
	int	result;
	int	is_negative;

	result = 0;
	is_negative = 1;
	while ((*str >= 0 && *str <= 32) || *str == 127)
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			is_negative = -1;
	while (*str >= '0' && *str <= '9')
		result = (result * 10) + (*str++ - 48);
	return (result * is_negative);
}
