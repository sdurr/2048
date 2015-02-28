/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_right.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:00:36 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 22:04:35 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int	**test_fusion_left(int **i)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (j <= 3)
	{
	  while (k <= 3)
	    {
	      if (i[j][k] == i[j][k +1])
		{	     
		  i[j][k] = 2 * i[j][k];
		  i[j][k + 1] = 0; 
		}
		  k++;
	    }			  
	      k = 0;
	      j++;
	}
	return(i);
}
