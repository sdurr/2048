/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:36:03 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 11:50:57 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "libft.h"
#include <curses.h>

void		draw_board(int signal)
{
	refresh();
	if (signal != -3)
		border('|', '|', '_', '_', '+', '+', '+', '+');
	mvvline(0, COLS/4, '|', LINES);
	mvvline(0, COLS/2, '|', LINES);
	mvvline(0, COLS/4 * 3, '|', LINES);
	mvhline(LINES / 4, 0, '_',  COLS);
	mvhline(LINES / 2, 0, '_', COLS);
	mvhline(LINES / 4 * 3, 0, '_', COLS);
}
