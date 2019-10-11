/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:18:43 by exam              #+#    #+#             */
/*   Updated: 2019/04/12 21:50:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_prime(int nb)
{
	int res;
	int i;

	i = 2;
	res = 0;
	while (i <= (nb / 2))
	{
		if ((nb / i) * i == nb)
			res += 1;
		i++;
	}
	if (res == 0)
		return (1);
	else
		return (0);
}

void	print_factors(int num)
{
	int i;

	i = 2;
	if (num == 1)
		printf("1\n");
	while (i <= num)
	{
		if ((num / i) * i == num && is_prime(i))
		{
			if (num != i)
				printf("%i*", i);
			else
				printf("%i\n", i);
			num /= i;
		}
		else
			i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_factors(atoi(argv[1]));
	}
	else
	{
		printf("\n");
	}
}
