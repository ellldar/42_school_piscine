/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:38:39 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/29 16:38:46 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "mylib.h"
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	n;
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	n = 0;
	char	reversed[len];
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		reversed[len - n] = str[n];
		n++;
	}
	return (reversed);
}

int		main(void)
{
	char	*word;
	char 	*word2;

	word = "Eldar Supataev";
	ft_putstr(word);
	ft_putchar('\n');
	word2 = ft_strrev(word);
	ft_putstr(word2); 
	printf("Результат - %s", word2);
	return (0);
}
