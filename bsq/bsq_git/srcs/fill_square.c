/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:49:52 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/17 18:44:46 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info.h"

void	fill_square(t_info info, char **grid, t_gridpos gridpos, int size)
{
	int	y;
	int	x;

	y = gridpos.y;
	x = gridpos.x;
	while (gridpos.y - y < size)
	{
		gridpos.x = x;
		while (gridpos.x - x < size)
		{
			grid[gridpos.y][gridpos.x] = info.f;
			gridpos.x++;
		}
		gridpos.y++;
	}
}
