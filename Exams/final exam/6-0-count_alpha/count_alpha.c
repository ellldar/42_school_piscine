/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 14:30:41 by exam              #+#    #+#             */
/*   Updated: 2019/04/19 15:29:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

typedef	struct	s_count
{
	int		count;
	char	letter;
}				t_count;

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	count_alpha(char *str, int len)
{
	char 	c;
	int		i;
	int		j;
	int		num;
	t_count	alpha[len];

	i = 0;
	while (i < len)
	{
		alpha[i].count = 0;
		alpha[i].letter = '\0';
		i++;
	}
	j = 0;
	num = 0;
	while (str[j])
	{
		c = str[j];
		if (c >= 'A' && c <= 'Z')
			c += 32;
		if (c >= 'a' && c<= 'z')
		{
			i = 0;
			while (i < len && alpha[i].letter)
			{
				if (alpha[i].letter == c)
				{
					alpha[i].count++;
					break ;
				}
				i++;
			}
			if (alpha[i].letter == '\0')
			{
				alpha[i].letter = c;
				alpha[i].count = 1;
				num++;
			}
		}
		j++;
	}
	i = 0;
    while (i < num)
    {
        if (i == num - 1)
            printf("%i%c\n", alpha[i].count, alpha[i].letter);
        else
            printf("%i%c, ", alpha[i].count, alpha[i].letter);
        i++;
    }
	if (num == 0)
		write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		count_alpha(argv[1], ft_strlen(argv[1]));
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}

