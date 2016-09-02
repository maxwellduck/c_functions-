/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_x_y.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 16:37:52 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/31 18:03:11 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

char	**tab_x_y(char *str, char **carre)
{
	int x;
	int t;
	int i;
	int y;

	x = 0;
	y = 0;
	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\0')
	{
		while (str[i] != '\n')
		{
			carre[x][y] = str[i];
			i++;
			y++;
		}
		carre[x][y] = '\n';
		y = 0;
		i++;
		x++;
	}
	return (carre);
}
