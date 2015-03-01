/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:05:44 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 20:24:13 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include <curses.h>

enum	e_const
{
	WIN = 2048
};

typedef struct	s_coord
{
	int x;
	int y;
	int new_x;
	int new_y;
}				t_coord;

WINDOW			*init_curses(int **i);
int				test_lose(int **i);
void			draw_board(int **i);
void			draw_win(int **j);
int				**send_digit(int key, int **i);
int				key_pad(WINDOW *win);
void			print_tab(int **i, int j, int k);
void			print_tab_suite(int **i, int j, int k);
int				**init_i(void);
int				**rot_right(int **i, int *test);
int				**rot_left(int **i, int *test);
int				**rot_up(int **i, int *test);
int				**rot_down(int **i, int *test, int j, int k);
int				**test_fusion_right(int **i, int *test);
int				**test_fusion_left(int **i, int *test);
int				**test_fusion_down(int **i, int *test);
int				**test_fusion_up(int **i, int *test);
int				**rand_board(int **i);
int				**press_down(int **i);
int				**press_left(int **i);
int				**press_right(int **i);
int				**press_up(int **i);
int				test_random(int **i);
int				test_win(int **i, int j);
#endif
