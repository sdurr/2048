/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sencas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 13:31:06 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 12:05:09 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include <stdlib.h>
#include "game.h"

int 		**send_digit(int key, int **i)
{
	if (key == KEY_DOWN)
	{
	  i = rot_down(i);
	  i = rot_down(i);
	  i = rot_down(i);
	  i = rot_down(i);
		i = test_fusion_down(i);
	  i = rot_down(i);
	  i = rand_board(i);
		clear();
		draw_board(i);
	}
	if (key == KEY_LEFT)
	{
		i = rot_left(i);
		i = rot_left(i);
		i = rot_left(i);
		i = rot_left(i);
      		i = test_fusion_left(i);
		i = rot_left(i);
		i = rand_board(i);
		clear();
		draw_board(i);
	}
	if (key == KEY_RIGHT)
	{
		i = rot_right(i);
		i = rot_right(i);
		i = rot_right(i);
		i = rot_right(i);
		i = test_fusion_right(i);
		i = rot_right(i);
		i = rand_board(i);

		clear();
		draw_board(i);
	}
	if (key == KEY_UP)
	{
		i = rot_up(i);
		i = rot_up(i);
		i = rot_up(i);
		i = rot_up(i);
		i = test_fusion_up(i);
		i = rot_up(i);
		i = rand_board(i);
		clear();
		draw_board(i);
	}
	return (i);
}
