/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 04:03:49 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/09 04:03:51 by esupatae         ###   ########.fr       */
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

int	ft_any(char **tab, int (*f)(char*))
{
	while (*tab != 0)
		if (f(*tab++) == 1)
			return (1);
	return (0);
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
	*str++ = "eldar";
	*str++ = "ldar";
	*str = NULL;
	printf("%i\n", ft_any(p, &whatever));
	return (0);
}