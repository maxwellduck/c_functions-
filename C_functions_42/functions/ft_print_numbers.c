/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 22:44:53 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/15 14:42:39 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	char c;

	c ='0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_print_numbers();
	return (0);

}

