/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfunk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:53:51 by exam              #+#    #+#             */
/*   Updated: 2019/04/12 21:59:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainfunk.h"

void	solve_bf(char *str)
{
	write(1, "I can definitely solve this problem!\nI was just a bit short on time", 100);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		solve_bf(argv[1]);
	else
		write(1, "\n", 1);
}

