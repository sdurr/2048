/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:36:03 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 21:21:28 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "libft.h"
#include <curses.h>

void		draw_board(int **i, t_coord *s)
{
	clear();
	if (s->new_x < 15 || s->new_y < 15)
		exit (0);
	border(':', ':', '_', '_', '+', '+', '+', '+');
	mvvline(0, s->new_y / 32 * 8, ':', s->new_x);
	mvvline(0, s->new_y / 32 * 16, ':', s->new_x);
	mvvline(0, s->new_y / 32 * 24, ':', s->new_x);
	mvhline(s->new_y / 32 * 8, 0, '_', s->new_x);
	mvhline(s->new_y / 32 * 16, 0, '_', s->new_x);
	mvhline(s->new_y / 32 * 24, 0, '_', s->new_x);
	print_tab(i, 0, 0, s);
}
