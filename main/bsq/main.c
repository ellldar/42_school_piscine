/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:22:34 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/15 22:22:54 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	*buf;

	if (argc > 1)
	{
		read_files(argc, argv);
	}
	else
	{
		fd = 0;
		fd = open("tmp", O_RDWR | O_CREAT | O_APPEND);
		buf = (char*)(malloc(sizeof(char) * (BUFF_SIZE + 1)));
		while ((ret = write(fd, buf, BUFF_SIZE)))
			buf[ret] = '\0';
		fd = close(fd);
	}
	return (0);
}
