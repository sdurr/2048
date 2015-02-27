/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_curses.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:28:34 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/27 23:18:11 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include "libft.h"

void		init_curses(void)
{
	WINDOW *win;

	win = initscr();
	cbreak();
	noecho();
	if (keypad(win, 1) == ERR)
		exit (0);
	if (getch() == ERR)
		exit (0);
	//wgetnstr(win, "_", COLS);
	endwin();
}
