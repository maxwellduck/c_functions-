/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 00:57:14 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/24 01:34:36 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
# include "ft_list.h"
t_list		*ft_create_elem(void *data)
{
	t_list *elem;

	elem = (t_list*) malloc(sizeof(t_list));
	if (elem)
	{
		elem->next = 0;
		elem->data = data;
	}
	return (elem);
}
