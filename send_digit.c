/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sencas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 13:31:06 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 20:47:59 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include <stdlib.h>
#include "game.h"

int 		**send_digit(int key, int **i)
{
	if (key == KEY_DOWN)
	{
//		i = rot_down(i);
		clear();
		draw_board(i);
	}
	if (key == KEY_LEFT)
	{
		clear();
		draw_board(i);
	}
	if (key == KEY_RIGHT)
	{
		clear();
		draw_board(i);
	}
	if (key == KEY_UP)
	{
		clear();
		draw_board(i);
	}
	return (i);
}
