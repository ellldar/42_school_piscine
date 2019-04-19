/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 18:15:56 by exam              #+#    #+#             */
/*   Updated: 2019/04/12 18:41:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_first_word(char *str)
{
	while(*str && (*str == ' ' || *str =='\t'))
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
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		ft_print_first_word(argv[1]);
	}
	return (0);
}
