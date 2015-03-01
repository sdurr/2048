/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sencas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 13:31:06 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 20:47:58 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include <stdlib.h>
#include "game.h"

int		**send_digit(int key, int **i, t_coord *s)
{
	int test;

	test = 0;
	test_lose(i);
	if (key == KEY_DOWN)
		i = press_down(i, s);
	if (key == KEY_LEFT)
		i = press_left(i, s);
	if (key == KEY_RIGHT)
		i = press_right(i, s);
	if (key == KEY_UP)
		i = press_up(i, s);
	return (i);
}
