/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 12:14:52 by exam              #+#    #+#             */
/*   Updated: 2019/04/19 14:16:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainfuck.h"

void	resolve_brainfuck(t_brainfuck *first, char *str)
{
	t_brainfuck	*current;
	char		c;
	int			match;

	match	= 0;
	current	= first;
	while (*str)
	{
		if (*str == '>')
			current = current->next;
		else if (*str == '<')
			current = current->prev;
		else if (*str == '+')
			current->value++;
		else if (*str == '-')
			current->value--;
		else if (*str == '[' && current->value == 0)
		{
			match = 0;
			while (*str)
			{
				if (*str == '[')
					match++;
				else if (*str == ']')
					match--;
				if (*str == ']' && match == 0)
					break;
				str++;
			}
		}
		else if (*str == ']' && current->value != 0)
		{
			match = 0;
			while (*str)
			{
				if (*str == ']')
					match++;
				else if (*str == '[')
					match--;
				if (*str == '[' && match == 0)
					break;
				str--;
			}
		}
		else if (*str == '.')
		{
			c = (char)(current->value);
			write(1, &c, 1);
		}
		str++;
	}
}

int	main(int argc, char **argv)
{
	t_brainfuck	*first;

	first = create_elem();
	if (argc == 2)
	{
		init_brainfuck(first);
		resolve_brainfuck(first, argv[1]);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}

