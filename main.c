
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:04:39 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 16:14:50 by sdurr            ###   ########.fr       */
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
	init_curses();
	getmaxyx(stdscr, y, x);
	while (1)
	{
			init_curses();
		getmaxyx(stdscr, new_y, new_x);
		if (y != new_y || x != new_x)
		{
			y = new_y;
			x = new_x;
			draw_board();
		}
	}

	endwin();
return (0);
}
