/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 13:12:03 by exam              #+#    #+#             */
/*   Updated: 2019/04/19 14:03:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainfuck.h"

t_brainfuck	*create_elem()
{
	t_brainfuck	*elem;

	elem = (t_brainfuck*)malloc(sizeof(t_brainfuck));
	elem->next = NULL;
	elem->prev = NULL;
	elem->value = 0;
	return (elem);
}

void	init_brainfuck(t_brainfuck *first)
{
	int			i;
	t_brainfuck	*tmp;
	t_brainfuck	*prev;

	i = 0;
	tmp = first;
	while (i < LANG_SIZE)
	{
		tmp->next = create_elem();
		prev = tmp;
		tmp = tmp->next;
		tmp->prev = prev;
		tmp->value = 0;
		i++;
	}
}

