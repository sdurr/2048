/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 18:22:40 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 18:42:03 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <stdlib.h>

int		**init_i(void)
{
	int	**i;
	int	j;

	j = 0;
	i = malloc(sizeof(int) * 5);
	while (j < 4)
		i[j++] = malloc(sizeof(int) * 5);
	i[0][0] = 0;
	i[0][1] = 0;
	i[0][2] = 0;
	i[0][3] = 0;
	i[1][0] = 0;
	i[1][1] = 0;
	i[1][2] = 0;
	i[1][3] = 0;
	i[2][0] = 0;
	i[2][1] = 0;
	i[2][2] = 0;
	i[2][3] = 0;
	i[3][0] = 0;
	i[3][1] = 0;
	i[3][2] = 0;
	i[3][3] = 0;
	return (i);
}
