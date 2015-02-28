/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:05:44 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 21:09:44 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		GAME_H
# define	GAME_H

# include <curses.h>

enum	e_const
{
	WIN = 2048
};

WINDOW			*init_curses(int **i);
void			draw_board(int **i);
int			**send_digit(int key, int **i);
int			key_pad(WINDOW *win);
void			print_tab(int **i);
int			**init_i(void);
int			**rot_right(int **i);
int			**rot_left(int **i);
int			**rot_up(int **i);
int			**test_fusion_right(int **i);
int			**test_fusion_left(int **i);
int			**rand_board(int **i);

#endif
