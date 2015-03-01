#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/27 22:03:00 by sdurr             #+#    #+#              #
#    Updated: 2015/03/01 21:46:18 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= game_2048

SRC			= main.c \
				test_lose.c \
				init_curses.c \
				draw_board.c \
				send_digit.c \
				key_pad.c \
				print_tab.c \
				print_tab_suite.c \
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
				test_random.c \
				press_down.c \
				press_left.c \
				press_right.c \
				press_up.c \
				test_win.c \
				draw_win.c \

OBJ			= $(SRC:.c=.o)

CC			= /usr/bin/gcc

export CFLAGS		= -Wall -Wextra -Werror

RM			= /bin/rm -f

PATHLIB		= -I libft/includes

$(NAME)	:		$(OBJ)
				Make -C libft/
				$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L libft/ -lft -lncurses -lmenu -g

clean	:
				$(RM) $(OBJ)
				$(RM) *~

all		:		$(NAME)

fclean	:		clean
				Make -C libft/ fclean
				$(RM) $(NAME)

re		:		fclean all

.c.o	:
				$(CC) $(CFLAGS) $(PATHLIB) -o $@ -c $<
