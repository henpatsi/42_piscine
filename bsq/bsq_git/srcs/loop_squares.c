/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_squares.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:10:03 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 09:56:12 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "info.h"
#include "make_squares.h"
#include "fill_square.h"

void	loop_grid(t_info info, char	**grid, int max)
{
	t_gridpos	gridpos;
	int			size;
	int			max_yx[2];

	max = 0;
	gridpos.y = 0;
	while (gridpos.y < info.y)
	{
		gridpos.x = 0;
		while (gridpos.x < info.x)
		{
			size = make_squares(info, grid, gridpos, 1);
			if (size > max)
			{
				max = size;
				max_yx[0] = gridpos.y;
				max_yx[1] = gridpos.x;
			}
			gridpos.x++;
		}
		gridpos.y++;
	}
	gridpos.y = max_yx[0];
	gridpos.x = max_yx[1];
	fill_square(info, grid, gridpos, max);
}
