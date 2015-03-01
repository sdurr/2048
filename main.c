/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:04:39 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 21:47:50 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <curses.h>
#include <signal.h>
#include "game.h"

int main(void)
{
	t_coord		x_y;
	WINDOW		*st;
	int			key;
	int			**i;

	i = init_i();
	rand_board(i);
	st = init_curses();
	getmaxyx(stdscr, x_y.y, x_y.x);
	draw_board(i, &x_y);
	while (1)
	{
		getmaxyx(stdscr, x_y.new_y, x_y.new_x);
		if (x_y.y != x_y.new_y || x_y.x != x_y.new_x)
		{
			x_y.y = x_y.new_y;
			x_y.x = x_y.new_x;
			refresh();
			draw_board(i, &x_y);
		}
		key = key_pad(st);
		i = send_digit(key, i, &x_y);
	}
	endwin();
	return (0);
}
