/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:15:20 by exam              #+#    #+#             */
/*   Updated: 2019/04/05 19:08:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	shift13(char c)
{
	char s;

	if (c >= 'A' && c <= 'Z')
	{
		s = (c + 13) > 90 ? 64 + (c + 13) % 90  : (c + 13);
	}
	else if (c >= 'a' && c <= 'z')
	{
		s = (c + 13) > 122 ? 96 + (c + 13) % 122 : (c + 13);
	}
	else 
	{
		s = c;
	}
	return (s);
}

int		main(int argc, char **argv)
{
	char 	*str;
	int		pos;
	
	if (argc == 2)
	{
		pos = 1;
		str = argv[pos];
		while (*str)
			ft_putchar(shift13(*str++));
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}

