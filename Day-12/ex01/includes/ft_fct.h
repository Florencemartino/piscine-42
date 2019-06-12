/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:56:33 by fmartino          #+#    #+#             */
/*   Updated: 2019/04/11 20:34:56 by cpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FCT_H
# define FT_FCT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>

# define BUF_SIZE 4096

int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
