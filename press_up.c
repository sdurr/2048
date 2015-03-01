/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   press_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:19:25 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 21:34:51 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <curses.h>

int			**press_up(int **i, t_coord *s)
{
	int test;

	test = 0;
	rot_up(i, &test);
	rot_up(i, &test);
	rot_up(i, &test);
	rot_up(i, &test);
	i = test_fusion_up(i, &test, s);
	rot_up(i, &test);
	if (test == 1)
		i = rand_board(i);
	test = 0;
	clear();
	draw_board(i, s);
	return (i);
}
