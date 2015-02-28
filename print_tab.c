/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 18:34:45 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 20:19:04 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "libft.h"
#include <curses.h>

void		print_tab(int *i)
{
	int j;
	int k;

	k = 0;
	j = 0;
	mvaddstr(LINES / 8, COLS / 8, ft_itoa(i[j++]));
	mvaddstr(LINES / 8, COLS / 8 * 3, ft_itoa(i[j++]));
	mvaddstr(LINES / 8, COLS / 8 * 5, ft_itoa(i[j++]));
	mvaddstr(LINES / 8, COLS / 8 * 7, ft_itoa(i[j++]));
	mvaddstr(LINES / 8 *3, COLS / 8 , ft_itoa(i[j++]));
	mvaddstr(LINES / 8 *3, COLS / 8 * 3 , ft_itoa(i[j++]));
	mvaddstr(LINES / 8 *3, COLS / 8 * 5, ft_itoa(i[j++]));
	mvaddstr(LINES / 8 *3, COLS / 8 * 7, ft_itoa(i[j++]));
	mvaddstr(LINES / 8 * 5, COLS / 8, ft_itoa(i[j++]));
	mvaddstr(LINES / 8 * 5, COLS / 8 * 3, ft_itoa(i[j++]));
	mvaddstr(LINES / 8 * 5, COLS / 8 * 5, ft_itoa(i[j++]));
	mvaddstr(LINES / 8 * 5, COLS / 8 * 7, ft_itoa(i[j++]));
	mvaddstr(LINES / 8 * 7, COLS / 8, ft_itoa(i[j++]));
	mvaddstr(LINES / 8 * 7, COLS / 8 *3, ft_itoa(i[j++]));
	mvaddstr(LINES / 8 * 7, COLS / 8 *5, ft_itoa(i[j++]));
	mvaddstr(LINES / 8 * 7, COLS / 8 *7, ft_itoa(i[j++]));
}
