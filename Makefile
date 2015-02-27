#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/27 22:03:00 by sdurr             #+#    #+#              #
#    Updated: 2015/02/27 22:20:07 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= game_2048

SRC			= main.c \

OBJ			= $(SRC:.c=.o)

CC			= /usr/bin/gcc

export CFLAGS		= -Wall -Wextra -Werror

RM			= /bin/rm -f

PATHLIB		= -I libft/includes

$(NAME)	:		$(OBJ)
				Make -C libft
				$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L libft -lft -lncurses

clean	:
				Make -C libft/ fclean
				$(RM) $(OBJ)
				$(RM) *~

all		:		$(NAME)

fclean	:		clean
				$(RM) $(NAME)

re		:		fclean all

.c.o	:
				$(CC) $(CFLAGS) $(PATHLIB) -o $@ -c $<
