
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:04:39 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 11:56:39 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <curses.h>
#include <signal.h>
#include "game.h"

int main(void)
{
	while (1)
	{
		init_curses();
		signal(SIGWINCH, &draw_board);
		refresh();

		mvaddch(LINES / 8, COLS / 8, '2');
		refresh();
		mvaddch(LINES / 8 * 3, COLS / 8, '2');
		refresh();
	}
	return (0);
}
