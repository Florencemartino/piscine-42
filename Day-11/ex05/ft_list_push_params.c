/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:16:19 by fmartino          #+#    #+#             */
/*   Updated: 2019/04/10 22:03:44 by fmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*element;

	element = ft_create_elem(data);
	element->next = *begin_list;
	*begin_list = element;
}

t_list		*ft_list_push_params(int argc, char **argv)
{
	int		count;
	t_list	*list;

	list = 0;
	count = 1;
	while (count < argc)
		ft_list_push_front(&list, argv[count++]);
	return (list);
}
