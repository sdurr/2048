
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:04:39 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/27 22:35:43 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <curses.h>
#include "game.h"

int main(int ac, char **av, char **env)
{
	ft_putstr("begin");
		init_curses();
		draw_board();
		if (ac > 0)
	ft_putstr("yes");
	if (av[1])
		ft_putstr(*env);
	return (0);
}
