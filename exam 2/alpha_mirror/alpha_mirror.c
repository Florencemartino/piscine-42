/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:15:44 by exam              #+#    #+#             */
/*   Updated: 2019/04/12 21:52:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int i;
	int position;
	int difference;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			position = av[1][i] - 96;
			difference = 26 - position;
			av[1][i] = av[1][i] + difference;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
		


		
