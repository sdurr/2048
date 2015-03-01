/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:05:44 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 16:12:20 by sdurr            ###   ########.fr       */
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
int			**rot_right(int **i, int *test);
int			**rot_left(int **i, int *test);
int			**rot_up(int **i, int *test);
int			**rot_down(int **i, int *test);
int			**test_fusion_right(int **i, int *test);
int			**test_fusion_left(int **i, int *test);
int			**test_fusion_down(int **i, int *test);
int			**test_fusion_up(int **i, int *test);
int			**rand_board(int **i);
int			test_random(int **i);
#endif
