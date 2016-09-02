/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 15:55:28 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/31 16:16:00 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_putstr_str(char **str)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (str[x][y] != '\0')
	{
		y = 0;
		ft_putstr(str[y]);
		x++;
	}
}
