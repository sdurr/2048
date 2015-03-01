/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   press_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:19:25 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 19:49:08 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <curses.h>

int			**press_up(int **i)
{
	int test;

	test = 0;
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
	return (i);
}
