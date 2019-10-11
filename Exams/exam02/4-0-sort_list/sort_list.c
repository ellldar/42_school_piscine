/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 19:45:23 by exam              #+#    #+#             */
/*   Updated: 2019/04/12 20:42:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *first;
	t_list *second;
	t_list *head;
	int		temp;

	if (lst == NULL || lst->next == NULL)
		return (lst);
	else
	{
		first = lst;
		head = first;
		while (first->next != NULL)
		{
			second = first->next;
			while (second)
			{
				if (cmp(first->data, second->data) == 0)
				{
					temp = second->data;
					second->data = first->data;
					first->data = temp;
				}
				second = second->next;
			}
			first = first->next;
		}
	}
	return (head);
}

