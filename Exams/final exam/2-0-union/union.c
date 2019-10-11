/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 10:28:52 by exam              #+#    #+#             */
/*   Updated: 2019/04/19 10:55:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_for_doubles(char *str1, char *str2)
{
	int		i;
	char	ascii[128];

	i = 0;
	while (i < 128)
		ascii[i++] = 0;
	while (*str1)
	{
		if (ascii[(int)(*str1)] == 0)
		{
			write(1, &(*str1), 1);
			ascii[(int)(*str1)] = 1;
		}
		str1++;
	}
	while (*str2)
	{
		if (ascii[(int)(*str2)] == 0)
		{
			write(1, &(*str2), 1);
			ascii[(int)(*str2)] = 1;
		}
		str2++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		check_for_doubles(argv[1], argv[2]);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}

