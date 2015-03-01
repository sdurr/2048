/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_curses.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:28:34 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 20:53:51 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include "libft.h"
#include "game.h"
#include <signal.h>

WINDOW		*init_curses(void)
{
	if (WIN % 2 != 0)
	{
		ft_putstr_fd("YOU CONDITION FOR WIN IS NOT GOOD !", 2);
		endwin();
		exit(0);
	}
	initscr();
	noecho();
	refresh();
	return (stdscr);
}
