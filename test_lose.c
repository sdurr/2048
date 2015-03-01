/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_random.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 15:12:38 by sdurr             #+#    #+#             */
/*   Updated: 2015/03/01 20:30:35 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <curses.h>

int			test_lose(int **i)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (j <= 3)
	{
		while (k <= 3)
		{
			if (i[j][k] == 0)
				return (1);
			k++;
		}
		k = 0;
		j++;
	}
	endwin();
	ft_putstr("YOU LOSE");
	exit (0);
}
