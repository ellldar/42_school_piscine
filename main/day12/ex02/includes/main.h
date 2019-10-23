/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 21:45:28 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/11 21:45:29 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

# define BUFF_SIZE		32768
# define READ_BY_LINE 	1
# define READ_BY_CHAR 	2

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(const char *str);
char	*ft_itoa(int nbr);
void	ft_read_files(int argc, char **argv, int read_mode, int num);
void	ft_read_by_line(int fd, int num);
void	ft_read_by_char(int fd, int num);

#endif
