/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 12:54:49 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/24 21:45:35 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	list = *begin_list;
	if (!list)
	{
		list = ft_create_elem(data);
	}
	else
	{
		while ((list)->next)
		{
			list = list->next;
		}
		list->next = ft_create_elem(data);
	}
}
