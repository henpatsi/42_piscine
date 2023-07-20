/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:23:15 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 16:40:20 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "info.h"
#include "ft.h"
#include "map_setup.h"
#include "info_setup.h"
#include "grid_setup.h"
#include "loop_squares.h"
#include "check_map.h"

int	biggest_square(char *map)
{
	char	**grid;
	t_info	info;

	info = set_info(map);
	grid = create_grid(info, map);
	if (grid == 0)
	{
		free(map);
		free_grid(grid);
		return (0);
	}
	free(map);
	loop_grid(info, grid, 0);
	print_grid(grid);
	free_grid(grid);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*map;
	int		i;

	if (argc < 2)
	{
		map = setup_stdinmap();
		if (map != 0)
			biggest_square(map);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		map = setup_map(argv[i]);
		if (map != 0)
			biggest_square(map);
		i++;
	}
	return (0);
}
