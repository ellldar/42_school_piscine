/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:58:48 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/05 16:49:40 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_whitespace(char c);
int		count_words(char *str);
void	create_addrs(char *str, int **addr);
int		calc_size(int **addr, int nbw);
void	write_words(int **addr, int nbw);

int		is_whitespace(char c)
{
	char	*chars;

	chars = " \t\n\v\f\r";
	while (*chars)
		if (c == *chars++)
			return (1);
	return (0);
}

int		count_words(char *str)
{
	int words;

	words = 0;
	while (*str)
	{
		if (!is_whitespace(*str))
		{
			words++;
			while(!is_whitespace(*str) && *str)
				str++;
		}
		str++;		
	}
	return (words);
}

void	create_addrs(char *str, int **addr)
{
	int i;
	int j;

	i = 0;
	j = 0;
	printf("Inside create addrs\n");
	while (str[i])
	{
		if (!is_whitespace(str[i]))
		{
		    printf("char - %c\n", str[i]);
			j = i;
			while (!is_whitespace(str[j]) && str[j])
				j++;
//			**addr++ = i;
//			**addr = j;
			printf("(%i, %i)\n", i, j);
			addr++;
			i = j;
		}
		i++;		
	}
}

int		calc_size(int **addr, int nbw)
{
	int i;
	int	size;

	i = 0;
	size = 0;
	while (i < nbw)
	{
		size = size + (*addr[1] -  *addr[0] + 1);
		i++;
	}
	return (size);
}

void	write_words(int **addr, int nbw)
{
	char *word;
	char **word_arr;

	printf("%i\n", calc_size(addr, nbw));
	//word_arr = (char**)(malloc(sizeof(char*) * calc_size(addr, nbw)));
}

char	**ft_split_whitespaces(char *str)
{
	int *pair;
	int	**addr;
	int	words;
	int size;

	words = count_words(str);
	pair = (int*)(malloc(sizeof(int) * 2));
	addr = (int**)(malloc(sizeof(int*) * words));
	printf("Before create addresses\n");
	printf("Size of pair - %li\n", sizeof(pair));
	printf("Size of addr - %li\n", sizeof(addr));
	create_addrs(str, addr);
	printf("After create addresses\n");
	return (NULL);
}

int		main(void)
{
	char *str;
	char **str_arr;

	str = "Hi my name Eldar";
	str_arr = ft_split_whitespaces(str);
	printf("%i\n", count_words(str));
	return (0);
}




























