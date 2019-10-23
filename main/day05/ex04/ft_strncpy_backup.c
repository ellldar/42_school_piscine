/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 23:03:16 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/02 23:03:22 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		printf("%c", src[i]);
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char *str1;
	char *str2;

	str1 = "Hello world!";
	printf("Before %s\n", str2);
	ft_strncpy(str2, str1, 5);
	printf("Before %s\n", str2);
	return (0);
}
