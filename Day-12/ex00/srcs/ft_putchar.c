/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 17:05:38 by cpham             #+#    #+#             */
/*   Updated: 2019/04/11 17:05:55 by cpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fct.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}