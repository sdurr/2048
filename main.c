/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:04:39 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 18:46:38 by sdurr            ###   ########.fr       */
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
	i = rand_board(i);
	st = init_curses(i);
	getmaxyx(stdscr, x_y.y, x_y.x);
	while (1)
	{
		getmaxyx(stdscr, x_y.new_y, x_y.new_x);
		if (x_y.y != x_y.new_y || x_y.x != x_y.new_x)
		{
			x_y.y = x_y.new_y;
			x_y.x = x_y.new_x;
			refresh();
			draw_board(i);
		}
		key = key_pad(st);
		i = send_digit(key, i);
	}
	endwin();
	return (0);
}
