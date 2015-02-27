
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:04:39 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/27 22:24:03 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <curses.h>

int main(int ac, char **av, char **env)
{
	ft_putstr("begin");
	initscr();  // creer stdscr
	raw();
	if (ac > 0)
	ft_putstr("yes");
	if (av[1])
		ft_putstr(*env);
	getch();
	endwin();
	return (0);
}
