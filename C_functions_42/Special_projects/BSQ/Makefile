# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cherriag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/30 15:39:24 by cherriag          #+#    #+#              #
#    Updated: 2016/08/31 16:20:36 by cherriag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSQ

HPATH = ft.h

SRCS = main.c\ libft.c\

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): gcc -I$(HPATH)$(FLAGS) -o $@ $(SRCS)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all
