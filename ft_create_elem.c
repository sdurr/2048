/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 14:42:50 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/28 15:15:18 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "game.h"
#include "libft.h"

t_list		*ft_create_elem(t_list *n, int x, int y)
{
	t_list	*elem;
	t_list *begin;

	begin = n;
	elem = malloc(sizeof(t_list));
	elem->x = x;
	elem->y = y;
	elem->n = 0;
	elem->next = NULL;
	while (n->next != NULL)
		n = n->next;
	n->next = elem;
	return (begin);
}
