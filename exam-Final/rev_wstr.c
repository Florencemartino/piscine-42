/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 12:39:13 by exam              #+#    #+#             */
/*   Updated: 2019/04/19 13:24:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_wstr(char *s)
{
	int i;
	int j;
	int k;

	i = 0;

	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if ((s[i] == ' ' || s[i] == '\t') && s[i + 1] >= 33 && s[i + 1] < 127)
		{
			j = i + 1;
	
			while (s[j] >= 33 && s[j] < 127)
			{
				write(1, &s[j], 1);
				j++;
			}
			write(1, " ", 1);
		}
		if (i == 0)
		{
			k = 0;
			while (s[k] >= 33 && s[k] < 127)
			{
				write(1, &s[k], 1);
				k++;
			}
		}
		i--;
	}
}
int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_rev_wstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
