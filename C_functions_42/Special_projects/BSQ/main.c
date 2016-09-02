/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 16:17:15 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/30 16:19:37 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

int		main(void)
{
	char **carre;
	int x;
	int y;

	x = 0;
	y = 1;
	carre = NULL;
	carre = malloc_return(carre);
	ft_putstr_str(carre);
	carre = find_obstacle_ultimate(carre, x, y);

	return (0);
}
