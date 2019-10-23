/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 05:30:47 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/02 05:30:50 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_atoi(const char *str)
{
	int	n;
	int	result;
	int	is_negative;
	int allow_char;

	n = 0;
	result = 0;
	is_negative = 1;
	allow_char = 1;
	while (str[n] != '\0')
	{
		if (str[n] >= '0' && str[n] <= '9')
		{
			allow_char = 0;
			result = (result * 10 + str[n]) - 48;
		}
		else if (allow_char == 1)
		{
			if (str[n] == '-' || str[n] == '+')
			{
				allow_char = 0;
				if (str[n] == '-')
					is_negative = -1;
			}
			else if (!(str[n] >= 0 && str[n] <= 32) && allow_char == 1)
				break ;
		}
		else
			break ;
		n++;
	}
	return (result * is_negative);
}
