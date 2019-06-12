/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:54:07 by fmartino          #+#    #+#             */
/*   Updated: 2019/04/04 16:04:45 by fmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	array = (int*)malloc(sizeof(*array) * (max - min));
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
