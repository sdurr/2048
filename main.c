
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:04:39 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 00:28:23 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <curses.h>
#include <signal.h>
#include "game.h"

int main(int ac, char **av, char **env)
{
	while (1)
	{
		init_curses();
		mvaddch(LINES / 8, COLS / 8, '2');
		refresh();
		mvaddch(LINES / 8 * 3, COLS / 8, '2');
		refresh();
	}
	if (ac > 0)
		ft_putstr("yes");
	if (av[1])
		ft_putstr(*env);
	return (0);
}
