/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_files.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 23:41:30 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/13 23:41:34 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	read_stdout(char **buf)
{
	int 	ret;
	int		size;
	char	*tmp_buf;

	size = 0;
	tmp_buf = *buf;
	while ((ret = read(0, tmp_buf, 1)))
	{
		size += ret;
		tmp_buf[ret] = '\0';
		printf("%s", tmp_buf);
	}
	return (size);
}
