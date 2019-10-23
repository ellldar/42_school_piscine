/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:35:05 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/11 16:01:50 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;

	current = *begin_list;
	if (!current)
		*begin_list = ft_create_elem(data);
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = ft_create_elem(data);
	}
}
