/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 21:39:20 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/11 22:06:21 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char c;

	c ='z';
	while (c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_print_reverse_alphabet();
	return (0);

}


