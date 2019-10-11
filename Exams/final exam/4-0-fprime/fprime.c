/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 11:30:27 by exam              #+#    #+#             */
/*   Updated: 2019/04/19 12:10:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_prime(int nb)
{
	int i;

	i = 2;
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	display_primes(int nb)
{
	int	i;

	i = 2;
	if (i < nb)
		while (i <= (nb / 2))
		{
			if (nb % i == 0 && is_prime(i))
			{
				printf("%i*", i);
				display_primes(nb / i);
				break ;
			}
			i++;
		}
	if (is_prime(nb))
		printf("%i\n", nb);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		display_primes(atoi(argv[1]));
	}
	else
	{
		printf("\n");
	}
	return (0);
}

