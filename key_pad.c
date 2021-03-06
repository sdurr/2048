/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_pad.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 13:36:37 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 20:02:26 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include <stdlib.h>
#include "game.h"

int		key_pad(WINDOW *win)
{
	int i;

	keypad(win, 1);
	refresh();
	i = getch();
	if (i == 27)
	{
		endwin();
		exit (0);
	}
	return (i);
}
