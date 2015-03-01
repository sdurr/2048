/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 18:22:40 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 18:39:36 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <stdlib.h>
#include <time.h>

int		**rand_board(int **i)
{
	int	j;
	int	k;
	int r;

	srand(time(NULL));
	r = rand() % 2;
	k = 0;
	test_random(i);
	while (k != 1)
	{
		srand(time(NULL));
		j = rand();
		j = j % 16;
		if (i[j / 4][j % 4] == 0)
		{
			if (r == 0)
				r = 4;
			else
				r = 2;
			i[j / 4][j % 4] = r;
			k = 1;
		}
	}
	return (i);
}
