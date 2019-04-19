/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 22:37:50 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/13 22:37:53 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	int		size;
	char	*buf;
	t_list	*char_list;

	buf = (char*)(malloc(sizeof(char) * (BUFF_SIZE + 1)));
	if ((size = read_stdout(&buf)) > 0)
	{
		char_arr = (char**)(malloc(sizeof(char) * (size)));
	}
	return (0);
}
