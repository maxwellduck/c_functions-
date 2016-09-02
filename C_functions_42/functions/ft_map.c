/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 20:46:19 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/23 20:55:29 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int a;
	int *b;

	a = 0;
	if ((b = (int *)malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	while (a < length)
	{
		b[a] = f(tab [a]);
		a++;
	}
	return (b);
}
