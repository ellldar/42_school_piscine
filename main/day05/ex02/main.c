/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 05:30:47 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/02 05:30:50 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(const char *str)
{
	int	result;
	int	is_negative;

	result = 0;
	is_negative = 1;
	while ((*str >= 0 && *str <= 32) || *str == 127)
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			is_negative = -1;
	while (*str >= '0' && *str <= '9')
		result = (result * 10) + (*str++ - 48);
	return (result * is_negative);
}

void	test(char *str)
{
	printf("\"%s\" - Test --> %s\n", str, atoi(str) == ft_atoi(str) ? "OK!" : "Fail!");
	printf("Standard Atoi Output - %d\n", atoi(str));
	printf("Custom Atoi Output (ft_atoi) - %d\n", ft_atoi(str));
	ft_putchar('\n');
}

int	main(void)
{
	test("    -2342343 asdfasdf ");
	// test("\t 1243512352\t666");
	// test("-+123456");
	// test("    2341234    21341234");
	// test("+-123456");
	// test("+100000000");
	// test("++12345623423");
	// test("0000023423400");
	// test("100000");
	// test("123123eldar");
	// test("123123    ");
	// test("123123.234    ");
	// test("123123,234    ");
	// test("123123/234    ");
	// test("    123123 ");
	// test("    -123123 ");
	// test("    -123123.234 ");
	// test("    -123123,234 ");
	// test("    --123123,234 ");
	// test("     ");
	// test("\0");
	// test("\n");
	// test("\b");
	// test("asdfasdf");
	// test("-234234-");
	// test("@#$%@#$%23452345");
	// test("23452345@#$%@#$%");
	// test("2147483649");
	return(0);
}
