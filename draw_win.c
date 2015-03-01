/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:36:03 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 20:01:09 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "libft.h"
#include <curses.h>
#include <stdlib.h>

void		draw_win(int **j)
{
	int i;

	clear();
	if (COLS < 15 || LINES < 15)
		exit (0);
	border(':', ':', '_', '_', '+', '+', '+', '+');
	mvaddstr(LINES / 2, COLS / 4, " YOU WIN! PRESS ANY KEY TO CONTINU");
	mvaddstr(LINES / 2 + 3, COLS / 4, " OR RESIZE SCREEN");
	mvaddstr(LINES / 2 + 6, COLS / 4, " ESC TO EXIT");
	i = getch();
	if (i == 27)
	{
		endwin();
		exit (0);
	}
	draw_board(j);
}
