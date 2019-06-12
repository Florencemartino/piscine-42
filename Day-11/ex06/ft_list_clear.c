/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 19:03:04 by fmartino          #+#    #+#             */
/*   Updated: 2019/04/10 19:38:02 by fmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *element;
	
	element = *begin_list;
	if (!(element))
	{
		return ;
	}
	if (element->begin_list)
	{
		*begin_list = *begin_list->next;
		free(element);
	}
	*begin_list = 0;
}
