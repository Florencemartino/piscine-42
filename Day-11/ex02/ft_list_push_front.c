/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 10:46:44 by fmartino          #+#    #+#             */
/*   Updated: 2019/04/10 21:50:17 by fmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *element;

	if (*begin_list)
	{
		element = ft_create_elem(data);
		element->next = *begin_list;
		*begin_list = element;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
