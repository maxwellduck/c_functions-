/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cherriag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 16:53:18 by cherriag          #+#    #+#             */
/*   Updated: 2016/08/31 18:59:22 by mducklow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int ft_strlen(char *str);
void ft_putstr(char *str);
char *strdup(char *stsr);
char *ft_mallocat(char *str, char *buf);
int ft_size_n(char *str);
char **malloc_return(char **carre);
char **ft_compare(char **str_old, char **str_new);
char **find_obstacle_ultimate(char **str, int x, int y);
int find_obstacles(char *str, int x, int y);
char **ft_print_x(char **carre, char **str, int x, int y);
char **tab_x_y(char *str, char **carre);
int ft_atoi(char *str);
void ft_putstr_str(char *str);

#endif
