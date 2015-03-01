/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sencas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 13:31:06 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 16:11:56 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include <stdlib.h>
#include "game.h"

int 		**send_digit(int key, int **i)
{
	int test;

	test = 0;
	if (key == KEY_DOWN)
	{
		i = rot_down(i, &test);
		i = rot_down(i, &test);
		i = rot_down(i, &test);
		i = rot_down(i, &test);
		i = test_fusion_down(i, &test);
		i = rot_down(i, &test);
		if (test == 1)
		i = rand_board(i);
		test = 0;
		clear();
		draw_board(i);
	}
	if (key == KEY_LEFT)
	{
		i = rot_left(i, &test);
		i = rot_left(i, &test);
		i = rot_left(i, &test);
		i = rot_left(i, &test);
		i = test_fusion_left(i, &test);
		i = rot_left(i, &test);
		if (test == 1)
			i = rand_board(i);
		test = 0;
		clear();
		draw_board(i);
	}
	if (key == KEY_RIGHT)
	{
		i = rot_right(i, &test);
		i = rot_right(i, &test);
		i = rot_right(i, &test);
		i = rot_right(i, &test);
		i = test_fusion_right(i, &test);
		i = rot_right(i, &test);
		if (test == 1)
			i = rand_board(i);
		test = 0;
		clear();
		draw_board(i);
	}
	if (key == KEY_UP)
	{
		i = rot_up(i, &test);
		i = rot_up(i, &test);
		i = rot_up(i, &test);
		i = rot_up(i, &test);
		i = test_fusion_up(i, &test);
		i = rot_up(i, &test);
		if (test == 1)
			i = rand_board(i);
		test = 0;
		clear();
		draw_board(i);
	}
	return (i);
}
