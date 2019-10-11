/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 18:03:51 by exam              #+#    #+#             */
/*   Updated: 2019/04/12 18:12:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int len;
	char *param;

	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		param = argv[1];
		len = ft_strlen(param);
		write(1, param, len);
		write(1, "\n", 1);
	}	
	return (0);
}

