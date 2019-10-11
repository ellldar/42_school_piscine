/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:15:22 by exam              #+#    #+#             */
/*   Updated: 2019/03/29 21:11:26 by exam             ###   ########.fr       */
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
	if (str[0] == '-')
	{
		n++;
		is_negative = -1;
	}
	while (str[n] != '\0')
	{
		if (str[n] >= '0' && str[n] <= '9')
		{
			result = (result * 10 + str[n]) - 48;
			printf("%d,", result);
		}
		else if (str[n] == '.' || str[n] == ',' || str[n] == ' ')
		{
			break;
		}
		else
		{
			result = 0;
			break;
		}
		n++;
	}
	return (result * is_negative);
}

