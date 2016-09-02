/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 18:38:00 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/19 15:20:13 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char c;

	c ='a';
	while (c <= 'z')
	{	
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}

