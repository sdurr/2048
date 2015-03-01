/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 18:16:57 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 18:28:04 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include "libft.h"
#include "game.h"

void		print_tab_suite(int **i, int j, int k)
{
	if (i[k][j] != 0)
		mvaddstr(LINES / 8 * 5, COLS / 8, ft_itoa(i[k][j]));
	j++;
	if (i[k][j] != 0)
		mvaddstr(LINES / 8 * 5, COLS / 8 * 3, ft_itoa(i[k][j]));
	j++;
	if (i[k][j] != 0)
		mvaddstr(LINES / 8 * 5, COLS / 8 * 5, ft_itoa(i[k][j]));
	j++;
	if (i[k][j] != 0)
		mvaddstr(LINES / 8 * 5, COLS / 8 * 7, ft_itoa(i[k][j]));
	k++;
	j = 0;
	if (i[k][j] != 0)
		mvaddstr(LINES / 8 * 7, COLS / 8, ft_itoa(i[k][j]));
	j++;
	if (i[k][j] != 0)
		mvaddstr(LINES / 8 * 7, COLS / 8 * 3, ft_itoa(i[k][j]));
	j++;
	if (i[k][j] != 0)
		mvaddstr(LINES / 8 * 7, COLS / 8 * 5, ft_itoa(i[k][j]));
	j++;
	if (i[k][j] != 0)
		mvaddstr(LINES / 8 * 7, COLS / 8 * 7, ft_itoa(i[k][j]));
}
