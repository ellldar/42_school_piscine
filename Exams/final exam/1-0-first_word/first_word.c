/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 10:10:47 by exam              #+#    #+#             */
/*   Updated: 2019/04/19 10:27:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	find_first_word(char *str)
{
	while (*str && (*str == ' ' || *str == '\t'))
		str++;
	while(*str && *str != ' ' && *str != '\t')
	{
		write(1, &(*str), 1);
		str++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		find_first_word(argv[1]);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}

