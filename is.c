/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 10:59:43 by exam              #+#    #+#             */
/*   Updated: 2017/02/28 11:35:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_in_range(t_m *m, int x, int y)
{
	if (x < 0 || x >= m->len || y < 1 || y >= m->ac)
		return (0);
	return (1);
}

int	is_king(t_m *m, int x, int y)
{
	char	c;

	c = m->av[y][x];
	if (c == 'K')
		return (1);
	else
		return (0);
}

int	is_enemy(t_m *m, int x, int y)
{
	char	c;

	c = m->av[y][x];
	if (c == 'P' || c == 'B' || c == 'R' || c == 'Q')
		return (1);
	else
		return (0);
}
