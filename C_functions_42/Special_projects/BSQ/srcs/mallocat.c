/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallocat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mducklow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 16:32:41 by mducklow          #+#    #+#             */
/*   Updated: 2016/08/31 20:02:46 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_mallocat(char *str, char *buf)
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	j = 0;
	tmp = (char *)malloc(sizeof(char) * 1000);
	if (tmp == NULL)
		return (0);
	while (str[++i])
		tmp[j++] = str[i];
	i = -1;
	while (buf[++i])
		tmp[j++] = buf[i];
	tmp[j] = '\0';
	free(str);
	free(buf);
	return (tmp);
}
