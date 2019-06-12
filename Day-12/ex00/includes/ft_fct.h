/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 17:04:15 by cpham             #+#    #+#             */
/*   Updated: 2019/04/11 17:05:16 by cpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FCT_H
# define FT_FCT_H
# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>

# define BUF_SIZE 4096

int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
