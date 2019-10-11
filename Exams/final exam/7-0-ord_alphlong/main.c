/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 15:44:57 by exam              #+#    #+#             */
/*   Updated: 2019/04/19 17:43:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

t_list	*create_element()
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	elem->next = NULL;
	elem->letter = '\0';
	return (elem);
}

t_list	*make_list(char *str)
{
	t_list	*head;
	t_list	*current;
	int		space_ok;

	head = create_element();
	current = head;
	while (*str && (*str == ' ' || *str == '\t'))
			str++;
	space_ok = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\t')
		{
			space_ok = 1;
			current->letter = *str;
			current->next = create_element();
			current = current->next;
		}
		else if (space_ok == 1)
		{
			space_ok = 0;
			current->letter = ' ';
			current->next = create_element();
			current = current->next;
		}
		str++;
	}
	return (head);
}

void	print_list(t_list *head)
{
	t_list *current;

	current = head;
	while (current)
	{
		write(1, &(current->letter), 1);
		current = current->next;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	t_list	*list;
	
	if (argc == 2)
	{
		list = make_list(argv[1]);
		print_list(list);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
