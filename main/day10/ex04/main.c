/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 04:42:29 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/09 04:42:31 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;

	count = 0;
	while (*tab != 0)
		if (f(*tab++) == 1)
			count++;
	return (count);
}

int	whatever(char *c)
{
	if (ft_strcmp(c, "eldar") == 0)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char **str;
	void	*p;

	str = (char**)(malloc(sizeof(char) * 19));
	p = str;
	*str++ = "eldar1";
	*str++ = "eldar1";
	*str++ = "ldar";
	*str++ = "eldar";
	*str++ = "eldar";
	*str++ = "eldar";
	*str = NULL;
	printf("%i\n", ft_count_if(p, &whatever));
	return (0);
}