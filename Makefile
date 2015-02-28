#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/27 22:03:00 by sdurr             #+#    #+#              #
#    Updated: 2015/02/28 18:56:55 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= game_2048

SRC			= main.c \
				init_curses.c \
				draw_board.c \
				send_digit.c \
				key_pad.c \
				init_struct.c \
				ft_create_elem.c \
				print_tab.c \
				init_i.c \

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
