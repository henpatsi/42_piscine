/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_squares.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:23:05 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/18 12:45:21 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "info.h"

int	test_square(t_info info, char **grid, t_gridpos gridpos, int size)
{
	int	y;
	int	x;

	y = gridpos.y;
	x = gridpos.x + size - 1;
	while (y - gridpos.y < size)
	{
		if (grid[y][x] != info.e)
		{
			return (0);
		}
		y++;
	}
	y = gridpos.y + size - 1;
	x = gridpos.x;
	while (x - gridpos.x < size)
	{
		if (grid[y][x] != info.e)
		{
			return (0);
		}
		x++;
	}
	return (1);
}

int	make_squares(t_info info, char **grid, t_gridpos gridpos, int size)
{
	int	max;

	if (gridpos.y + size > info.y || gridpos.x + size > info.x)
		max = size - 1;
	else if (test_square(info, grid, gridpos, size) == 0)
		max = size - 1;
	else
		max = make_squares(info, grid, gridpos, size + 1);
	return (max);
}
