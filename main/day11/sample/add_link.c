/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:43:25 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/10 12:45:15 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list	*add_link(t_list *list, char *str)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (temp)
	{
		temp->str = str;
		temp->next = list;
	}
	return (temp);
}
