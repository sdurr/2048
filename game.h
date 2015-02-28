/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:05:44 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 19:47:46 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		GAME_H
# define	GAME_H

# include <curses.h>

enum	e_const
{
	WIN = 2048
};

WINDOW		*init_curses(int *i);
void		draw_board(int *i);
int		*send_digit(int key, int *i);
int			key_pad(WINDOW *win);
void		print_tab(int *i);
int			*init_i(void);
#endif
