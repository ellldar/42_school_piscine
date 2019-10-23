/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:37:09 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/02 21:37:13 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

int		main(void)
{
    char *dest;
    char *src;

    src = "Hello Eldar";
    printf("Dest1 -> %s\n", dest);
    dest = ft_strcpy(dest, src);
    printf("Dest2 -> %s\n", dest);
    return (0);
}
