/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 23:03:12 by esupatae          #+#    #+#             */
/*   Updated: 2019/03/29 23:03:19 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "mylib.h"

int	ft_atoi(const char *str)
{	
	int	n;
	int	result;
	int	is_negative;
	int sign_allowed;

	n = 0;
	result = 0;
	is_negative = 1;
	sign_allowed = 1;
	while (str[n] != '\0')
	{
		if (str[n] >= '0' && str[n] <= '9') 
		{
			result = (result * 10 + str[n]) - 48;	
		}
		else if (str[n] != ' ' && str[n] != '-' && str[n] != '+') 
		{
			break;
		}
		else if (str[n] == '-' || str[n] == '+')
		{
			if (sign_allowed == 1)
			{
				sign_allowed = 0;
				if (str[n] == '-') 
				{
					is_negative = -1;
				}
			}
			else 
			{
				break;
			}
		}
		n++;
	}
	return (result * is_negative);


	// while(str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f' || str[i] == '\n' || str[i] == ' ')
		// i++;


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
	test("\t 1243512352");
	test("-+123456");
	test("    2341234    21341234");
	test("+-123456");
	test("+100000000");
	test("++12345623423");
	test("0000023423400");
	test("100000");
	test("123123eldar");
	test("123123    ");
	test("123123.234    ");
	test("123123,234    ");
	test("123123/234    ");
	test("    123123 ");
	test("    -123123 ");
	test("    -123123.234 ");
	test("    -123123,234 ");
	test("    --123123,234 ");
	test("     ");
	test("\0");
	test("\n");
	test("\b");
	test("asdfasdf");
	test("-234234-");
	test("@#$%@#$%23452345");
	test("23452345@#$%@#$%");
	return(0);
}