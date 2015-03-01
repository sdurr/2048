/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_right.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:00:36 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 11:29:55 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int	**test_fusion_down(int **i)
{
	int j;
	int k;

	j = 3;
	k = 0;
	while (k <= 3)
	{
		while (j > 0)
	    {
			if (i[j][k] == i[j - 1][k])
			{
				i[j][k] = 2 * i[j][k];
				i[j - 1][k] = 0;
			}
			j--;
	    }
	  j = 3;
	  k++;
	}
	return(i);
}