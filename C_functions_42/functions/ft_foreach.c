/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:19:19 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/23 20:36:48 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_foreach(int *tab, int length, void(*f)(int))
{
	int		i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
