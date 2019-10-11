/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 12:17:36 by exam              #+#    #+#             */
/*   Updated: 2019/04/19 14:18:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINFUCK_H
# define BRAINFUCK_H

# include <unistd.h>
# include <stdlib.h>

# define	LANG_SIZE	2048

typedef	struct	s_brainfuck	t_brainfuck;

typedef	struct	s_brainfuck
{
	t_brainfuck		*next;
	t_brainfuck 	*prev;
	int				value;
}				t_brainfuck;

t_brainfuck		*create_elem();
void			init_brainfuck(t_brainfuck *first);
void			resolve_brainfuck(t_brainfuck *first, char *str);

#endif

