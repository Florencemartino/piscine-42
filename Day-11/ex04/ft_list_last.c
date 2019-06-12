/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 14:01:08 by fmartino          #+#    #+#             */
/*   Updated: 2019/04/10 19:46:47 by fmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list		*element;

	if (begin_list == 0)
	{
		return (begin_list);
	}
	element = begin_list;
	while (element->next)
	{
		element = element->next;
	}
	return (element);
}
