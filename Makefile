#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/27 22:03:00 by sdurr             #+#    #+#              #
#    Updated: 2015/03/01 11:20:28 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= game_2048

SRC			= main.c \
				init_curses.c \
				draw_board.c \
				send_digit.c \
				key_pad.c \
				init_struct.c \
				print_tab.c \
				init_i.c \
				rot_right.c \
				rot_left.c \
				rot_up.c \
				rot_down.c \
				test_fusion_right.c \
				test_fusion_down.c \
				test_fusion_up.c \
				test_fusion_left.c \
				rand_board.c \

OBJ			= $(SRC:.c=.o)

CC			= /usr/bin/gcc

export CFLAGS		= -Wall -Wextra -Werror

RM			= /bin/rm -f

PATHLIB		= -I libft/includes

$(NAME)	:		$(OBJ)
				Make -C libft/
				$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L libft/ -lft -lncurses

clean	:
				$(RM) $(OBJ)
				$(RM) *~

all		:		$(NAME)

fclean	:		clean
				$(RM) $(NAME)

re		:		fclean all

.c.o	:
				$(CC) $(CFLAGS) $(PATHLIB) -o $@ -c $<
