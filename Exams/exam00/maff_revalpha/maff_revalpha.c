/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:36:47 by exam              #+#    #+#             */
/*   Updated: 2019/03/29 18:53:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_getlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	int	pos;
	char	*upper;
	char	*lower;

	upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	lower = "abcdefghijklmnopqrstuvwxyz";
	pos = ft_getlen(upper) - 1;
	while (pos >= 0)
	{
		if (pos % 2 == 0)
		{
			ft_putchar(upper[pos]);
		}
		else
		{
			ft_putchar(lower[pos]);
		}
		pos--;
	}	
	ft_putchar('\n');
	return (0);
}

