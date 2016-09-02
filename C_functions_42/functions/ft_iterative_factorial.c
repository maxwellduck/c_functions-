/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fit_iteractive_factorial.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 14:43:54 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/14 04:41:47 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int c;
	int total;

	c = 1;
	total = 1;
	if (nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 0)
		return (0);
	while (c <= nb)
	{
		total *= c;
		++c;
	}
	return (total);
}
