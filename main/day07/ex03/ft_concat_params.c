/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 21:19:40 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/04 21:19:42 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *c)
{
	int i;

	i = 0;
	while (*c++)
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		chars;
	int		total;

	i = 1;
	chars = 0;
	while (i < argc)
	{
		chars += ft_strlen(argv[i]);
		chars++;
		i++;
	}
	temp = (char*)(malloc(sizeof(char) * chars));
	i = 1;
	chars = 0;
	while (i < argc)
	{
		while (*argv[i] != '\0')
			temp[chars++] = *argv[i]++;
		temp[chars++] = '\n';
		i++;
	}
	return (temp);
}
