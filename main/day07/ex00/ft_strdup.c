/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 11:24:37 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/04 11:24:40 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*temp;
	int		len;

	len = 0;
	while (*src++)
		len++;
	temp = (char*)(malloc(sizeof(*src) * (len++ + 1)));
	while (len--)
		src--;
	temp = src;
	return (temp);
}
