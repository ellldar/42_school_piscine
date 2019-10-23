/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:42:42 by esupatae          #+#    #+#             */
/*   Updated: 2019/04/11 19:42:45 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

# define BUFF_SIZE	32768

void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_read_files(int argc, char **argv);
void	ft_read_file(int fd);

#endif
