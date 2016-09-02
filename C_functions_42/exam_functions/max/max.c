/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:38:28 by mducklow          #+#    #+#             */
/*   Updated: 2016/09/01 16:48:03 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				t;

	i = 0;
	t = tab[0];
	while (i < len)
	{
		if (t < tab[i])
				t = tab[i];
		i++;
	}
	if (i == len)
			return (t);
	return (0);
}

int		main(void)
{
	int	tab[100] =	{9, 10, 45, 12, 5, 4, 8};

	max(tab, 7);
	printf("%d", max(tab, 7));
	return (0);
}
