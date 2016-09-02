/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cherriag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 17:05:28 by cherriag          #+#    #+#             */
/*   Updated: 2016/08/31 19:51:50 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude "ft.h"

char **ft_print_x(char **carre, char **str, int x, int y)
{
	int tmpy;

	tmpy = y;
	**carre = **str;
	while(carre[x][y] != 'o')
	{
		while(y > 0)
		{
			carre[x][y] = 'x';
			y--;
		}
		y = tmpy;
		x--;
	}
	return (carre);
}
