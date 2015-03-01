
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:04:39 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 17:12:48 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <curses.h>
#include <signal.h>
#include "game.h"

int main(void)
{
	int x;
	int y;
	int new_x;
	int new_y;
	WINDOW *st;
	int key;
	int **i;

	i = init_i();
	i = rand_board(i);
	st = init_curses(i);
	getmaxyx(stdscr, y, x);
	while (1)
	{
		getmaxyx(stdscr, new_y, new_x);
		if (y != new_y || x != new_x)
		{
			y = new_y;
			x = new_x;
			draw_board(i);
		}
		key = key_pad(st);
		i = send_digit(key, i);
	}
	endwin();
return (0);
}
