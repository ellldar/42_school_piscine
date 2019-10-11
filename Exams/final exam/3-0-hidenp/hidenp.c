/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 10:57:50 by exam              #+#    #+#             */
/*   Updated: 2019/04/19 11:25:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

void	find_np(char *str1, char *str2, int len)
{
	int	count;

	count = 0;
	while (*str1)
	{
		while (*str2)
		{
			if (*str1 == *str2)
			{
				count++;
				str2++;
				break ;
			}
			str2++;
		}
		str1++;
	}
	if (count == len)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		find_np(argv[1], argv[2], ft_strlen(argv[1]));
	else
		write(1, "\n", 1);
	return (0);
}

