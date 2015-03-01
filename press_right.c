/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   press_right.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:16:07 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 17:17:32 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include "game.h"

int			**press_right(int **i)
{
	int test;

	test = 0;
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
	return (i);
}
