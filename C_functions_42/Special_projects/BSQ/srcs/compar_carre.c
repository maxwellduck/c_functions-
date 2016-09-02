/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compar_carre.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cherriag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 15:48:47 by cherriag          #+#    #+#             */
/*   Updated: 2016/08/31 19:13:23 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_compare(char **str_old, char **str_new)
{
	int x_str_old; /*declaring our int variable x_str_old*/
	int x_str_new; /*declaring our int variable x_str_new*/
	int x; /*declaring our int variable x*/
	int y; /*decalring our int variable y*/

	x = 0; /*initializing our x variable*/
	y = 0; /*initializing our y variable*/
	x_str_old = 0; /*initializing our x_str_old variable*/
	x_str_new = 0; /*intializing our our x_str_new variable*/
	while (str_old[x][y] != '\0') /*if none of the values are not equal to a null value int the array*/
	{
		while (str_old[x][y] != '\n') /*if none of the value are not equal to a new line*/
		{
			if (str_old[x][y] == 'x') /*if the value is equal to an x*/
				x_str_old++; /*incriment the variable x_str_old by one*/
			y++; /*incriment y by one*/
		}
		x++; /*incriment x by one*/
	}
	x = 0; /*reinitializing the x variable to 0*/
	y = 0; /*reinitializing the variables to 0*/
	while (str_new[x][y] != '\0') /*while the x and y values in the str_new array are not equal to a null value*/
	{
		while (str_new[x][y] != '\n') /*while the x and y valuaes int the str_new array are not equal to a new line*/
		{
			if (str_new[x][y] == 'x') /*if the value is equal to x*/
				x_str_new++; /*incriment up the x_str_new by one*/
			y++; /*incriment y by one*/
		}
		x++; /*incriment the x value by one*/
	}
	if (x_str_old >= x_str_new) /*if the old string is greater than the new string*/
		return (str_old); /*return the value of the old string*/
	else /*if the old string is not greater than the ew string*/
		return (str_new); /*return the value of the new string*/
	return (0); /*exit the funciton loop*/
}
