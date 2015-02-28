/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_curses.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:28:34 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 16:15:06 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include "libft.h"
#include "game.h"
#include <signal.h>

void		init_curses(void)
{
	WINDOW *win;

	win = initscr();
	raw();
	noecho();
	draw_board();
	refresh();
	key_pad(win);

}
