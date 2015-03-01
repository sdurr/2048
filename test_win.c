/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_win.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 18:49:44 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 20:56:25 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <curses.h>
#include <stdlib.h>

int		test_win(int **i, int j, t_coord *s)
{
	if (j == WIN)
	{
		clear();
		draw_win(i, s);
		return (1);
	}
	return (0);
}
