/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 19:43:48 by fmartino          #+#    #+#             */
/*   Updated: 2019/03/31 21:03:42 by fmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int a, char f, char m, char e)
{
	int i;

	i = 0;
	ft_putchar(f);
	while (i < a - 2)
	{
		ft_putchar(m);
		i++;
	}
	if (a > 1)
	{
		ft_putchar(e);
	}
	ft_putchar('\n');
}
