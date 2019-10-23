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

int		is_whitespace(char c);
int		count_words(char *str);
void	create_addrs(char *str, int **addr);
int		calc_size(int **addr, int nbw);
char	**write_words(int **addr, int nbw, char *str);

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
			while (!is_whitespace(*str) && *str)
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
	int w;

	i = 0;
	j = 0;
	w = 0;
	while (str[i])
	{
		if (!is_whitespace(str[i]))
		{
			j = i;
			while (!is_whitespace(str[j]) && str[j])
				j++;
			addr[w] = (int*)(malloc(sizeof(int) * 2));
			addr[w][0] = i;
			addr[w][1] = j;
			w++;
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
		size = size + (*addr[1] - *addr[0] + 1);
		i++;
	}
	return (size);
}

char	*extract_word(char *str, int start, int end)
{
	int		i;
	char	*temp;

	i = start;
	temp = (char*)(malloc(sizeof(char) * (end - start + 2)));
	while (i <= end)
	{
		temp[i - start] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

char	**write_words(int **addr, int nbw, char *str)
{
	char	**wordarr;
	int		size;
	int		word_size;
	int		i;

	size = calc_size(addr, nbw);
	wordarr = (char**)(malloc(sizeof(char*) * (size + 1)));
	i = 0;
	while (i < nbw)
	{
		word_size = addr[i][1] - addr[i][0] + 2;
		wordarr[i] = (char*)(malloc(sizeof(char) * word_size));
		wordarr[i] = extract_word(str, addr[i][0], addr[i][1]);
		i++;
	}
	wordarr[i] = 0;
	return (wordarr);
}

char	**ft_split_whitespaces(char *str)
{
	int		**addr;
	int		words;
	int		size;
	char	**arr;

	words = count_words(str);
	addr = (int**)(malloc(sizeof(int*) * (words * 2 + 1)));
	create_addrs(str, addr);
	arr = write_words(addr, words, str);
	return (arr);
}
