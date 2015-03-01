/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 18:34:45 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 21:03:11 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "libft.h"
#include <curses.h>

void		print_tab(int **i, int j, int k, t_coord *s)
{
	if (i[k][j] != 0)
		mvaddstr(s->y / 8, s->x / 8, ft_itoa(i[k][j]));
	j++;
	if (i[k][j] != 0)
		mvaddstr(s->y / 8, s->x / 8 * 3, ft_itoa(i[k][j]));
	j++;
	if (i[k][j] != 0)
		mvaddstr(s->y / 8, s->x / 8 * 5, ft_itoa(i[k][j]));
	j++;
	if (i[k][j] != 0)
		mvaddstr(s->y / 8, s->x / 8 * 7, ft_itoa(i[k][j]));
	j = 0;
	k++;
	if (i[k][j] != 0)
		mvaddstr(s->y / 8 * 3, s->x / 8, ft_itoa(i[k][j]));
	j++;
	if (i[k][j] != 0)
		mvaddstr(s->y / 8 * 3, s->x / 8 * 3, ft_itoa(i[k][j]));
	j++;
	if (i[k][j] != 0)
		mvaddstr(s->y / 8 * 3, s->x / 8 * 5, ft_itoa(i[k][j]));
	j++;
	if (i[k][j] != 0)
		mvaddstr(s->y / 8 * 3, s->x / 8 * 7, ft_itoa(i[k][j]));
	print_tab_suite(i, 0, ++k, s);
}
