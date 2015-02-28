/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_curses.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:28:34 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 11:58:34 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include "libft.h"
#include "game.h"
#include <signal.h>

void		init_curses(void)
{
	WINDOW *win;
	int i;

	win = initscr();
	cbreak();
	noecho();
	refresh();
	if (keypad(win, 1) == ERR)
		exit (0);
	if ((i = getch()) == ERR)
		exit (0);
	if (i == 27)
		exit(0);
	draw_board(0);
	refresh();
	endwin();

}
