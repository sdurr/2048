/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   press_left.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:06:52 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 20:57:00 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include "game.h"

int			**press_left(int **i, t_coord *s)
{
	int test;

	test = 0;
	i = rot_left(i, &test);
	i = rot_left(i, &test);
	i = rot_left(i, &test);
	i = rot_left(i, &test);
	i = test_fusion_left(i, &test, s);
	i = rot_left(i, &test);
	if (test == 1)
		i = rand_board(i);
	test = 0;
	clear();
	draw_board(i, s);
	return (i);
}
