/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 16:13:54 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/31 16:15:02 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int cpt;

	cpt = 0;
	while (*str != '\0')
	{
		str++;
		cpt++;
	}
	return (cpt);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
