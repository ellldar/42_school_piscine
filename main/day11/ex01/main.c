/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:35:05 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/11 15:58:38 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

/*void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;
	t_list *current;

	elem = malloc(sizeof(t_list));
	current = *begin_list;
	if (!current)
	{
		elem = ft_create_elem(data);
		*begin_list = elem;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = ft_create_elem(data);
	}	
}*/

void crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

int main()
{
	t_list* list = 0;
	ft_list_push_back(&list, "asdf");
	crap_a_list(list);
	ft_list_push_back(&list, "qwer");
	ft_list_push_back(&list, "zxcv");
	crap_a_list(list);
	list = 0;
	ft_list_push_back(&list, "uiop");
	ft_list_push_back(&list, "hjkl");
	crap_a_list(list);
}
