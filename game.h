/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:05:44 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 16:14:39 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		GAME_H
# define	GAME_H

# include <curses.h>

enum	e_const
{
	WIN = 2048
};

typedef struct s_list
{
	int x;
	int y;
	int n;
	struct s_list *next;
}			t_list;

void		init_curses(void);
void		draw_board(void);
void		send_digit(void);
void		key_pad(WINDOW *win);

#endif
