/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   press_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 16:57:42 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 19:48:58 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include "game.h"

int			**press_down(int **i)
{
	int test;

	test = 0;
	i = rot_down(i, &test, 3, 0);
	i = rot_down(i, &test, 3, 0);
	i = rot_down(i, &test, 3, 0);
	i = rot_down(i, &test, 3, 0);
	i = test_fusion_down(i, &test);
	i = rot_down(i, &test, 3, 0);
	if (test == 1)
		i = rand_board(i);
	test = 0;
	clear();
	draw_board(i);
	return (i);
}
