/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fusion_up.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:23:11 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 19:49:59 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int	**test_fusion_up(int **i, int *test)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (k <= 3)
	{
		while (j < 3)
		{
			if (i[j][k] == i[j + 1][k] && i[j][k] != 0)
			{
				*test = 1;
				i[j][k] = 2 * i[j][k];
				test_win(i, i[j][k]);
				i[j + 1][k] = 0;
			}
			j++;
		}
		j = 0;
		k++;
	}
	return (i);
}
