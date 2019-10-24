/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:51:10 by exam              #+#    #+#             */
/*   Updated: 2019/04/05 21:53:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_get_int_len(int n)
{
	int	len;

	len = n <= 0 ? 1 : 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	ft_pow(int x, int y)
{
	int	n;
	int	ans;

	n = y;
	ans = 1;
	while (n-- > 0)
		ans *= x;
	return (ans);
}

static int	ft_abs(int n)
{
	return (n < 0 ? -n : n);
}

char		*ft_itoa(int n)
{
	char	*ans;
	char	*ptr;
	int		len;

	len = ft_get_int_len(n);
	ans = ft_strnew((size_t)len);
	if (!ans)
		return (NULL);
	ptr = ans;
	if (n < 0 && len-- > 0)
		*ptr++ = '-';
	while (len-- > 0)
		*ptr++ = ft_abs((n / ft_pow(10, len)) % 10) + '0';
	*ptr = '\0';
	return (ans);
}
