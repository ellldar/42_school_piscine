/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 23:06:26 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/13 23:07:45 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

/**********       REMOVE THESE LIBRARIES     ************/
#include <stdio.h>

# define BUFF_SIZE	10

typedef struct s_list	t_list;

typedef struct	s_dims
{
	int		width;
	int		height;
}				t_dims;

typedef struct	s_list
{
	char		c;
	t_stdout	*next;
}				t_list;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		read_stdout(char **buf);

#endif
