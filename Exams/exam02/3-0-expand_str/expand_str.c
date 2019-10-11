/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 19:10:49 by exam              #+#    #+#             */
/*   Updated: 2019/04/12 19:36:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_expand_str(char *str)
{
	while (*str && (*str == ' ' || *str == '\t'))
		str++;
	while(*str)
	{
		while (*str && *str != ' ' && *str != '\t')
		{
			write(1, &(*str), 1);
			str++;
		}
		while (*str && (*str == ' ' || *str == '\t'))
			str++;
		if (!(*str))
			break ;
		write(1, "   ", 3);
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_expand_str(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}

