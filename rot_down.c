/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_right.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:00:36 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 18:11:40 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int			**rot_down(int **i, int *test, int j, int k)
{
	while (k <= 3)
	{
		if (j > 0)
		{
			if (i[j][k] == 0)
			{
				while (--j >= 0 && i[j][k] != 0)
				{
					*test = 1;
					i[j + 1][k] = i[j][k];
					i[j][k] = 0;
				}
			}
			else
				j--;
		}
		else
		{
			k++;
			j = 3;
		}
	}
	return (i);
}
