/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 16:17:15 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/31 18:22:33 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

int		main()
{
	int y;
	int x;
	char **carre;
	
	x = 0;
	y = 1;
	carre = NULL;
	carre = malloc_return(carre);
	ft_putstr_str(carre);
	carre = find_obstacle_ultimate(carre, x, y);
	return (0);
}
