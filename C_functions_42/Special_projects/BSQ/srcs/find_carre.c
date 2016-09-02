/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_carre.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cherriag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 16:28:49 by cherriag          #+#    #+#             */
/*   Updated: 2016/08/31 19:50:14 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int find_obstacle(char **str, int x, int y) 
{
	while (str[y][x] != 'o' && str[y][x] != '\n') 
		y++; 
	if (str[y][x] == 'o')
	{
		return(y); 
	}
	else 
		return (0);
}

char **find_obstacle_ultimate(char **str, int x, int y) 
{
	char **carre; 

	carre = str; 
	while (find_obstacle(str, x, y) == 0)
	{
		y = find_obstacle(str, x, y); 
		x++;
		printf("%d", y); 
	}
	print("%d", y);
	if (y >= (find_obstacles(str, x, y)) && x < y)
	{
		ft_pustsr("you");
		x++;
	}
	if (x == y)
	{
		y = x;
		carre = ft_print_x(carre, str, x, y);
	}
	return (carre);
}
