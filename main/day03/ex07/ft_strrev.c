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

char	*ft_strrev(char *str)
{
	char	*reversed = *str;
	int	n;
	int	len;

	len = 0;
	while (str[len] != '\n')
	{
		len++;
	}
	n = 0;
	while (str[n] != '\n')
	{
		reversed[len - n] = str[n];
		n++;
	}
	return (reversed);
}
