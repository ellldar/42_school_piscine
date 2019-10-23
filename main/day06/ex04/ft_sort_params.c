/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:47:11 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/03 21:47:13 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	sort(int start, int end, char **str)
{
	char	*temp;
	int		i;
	
	i = start;
	if (i < end)
	{
		while (i < end)
		{
			if (ft_strcmp(str[start], str[i]) > 0)
			{
				temp = str[i];
				str[i] = str[start];
				str[start] = temp;
			}
			i++;
		}
		sort(start + 1, end, str);
	}
	else {
		return ;
	}
}

void	print_param(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		sort(1, argc, argv);
		while (i < argc)
			print_param(argv[i++]);
	}
	return (0);
}
