/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 15:40:14 by mducklow          #+#    #+#             */
/*   Updated: 2016/09/01 16:47:15 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] >= 'A' && argv[1][i] <= 'M') ||
				(argv[1][i] >= 'a' && argv[1][i] <= 'm'))
		{
			ft_putchar(argv[1][i] + 13);
			i++;
		}
		else if ((argv[1][i] >= 'N' && argv[1][i] <= 'Z') ||
			(argv[1][i] >= 'n' && argv[1][i] <= 'z'))
		{
			ft_putchar(argv[1][i] - 13);
			i++;
		}
		else
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
