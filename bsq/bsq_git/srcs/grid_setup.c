/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_setup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:16:42 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 15:17:31 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "info.h"
#include "ft.h"

void	free_grid(char **grid)
{
	int	i;

	i = 0;
	while (grid[i] != 0)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

void	print_grid(char **grid)
{
	int	y;

	y = 0;
	while (grid[y] != 0)
	{
		ft_putstr(grid[y]);
		ft_putstr("\n");
		y++;
	}
}

void	fill_row(char *map, char *row)
{
	int	i;

	i = 0;
	while (map[i] != '\n')
	{
		row[i] = map[i];
		i++;
	}
	row[i] = 0;
}

char	**create_grid(t_info info, char	*map)
{
	char	**grid;
	int		i;

	grid = malloc((info.y + 1) * sizeof(char *));
	if (grid == 0)
		return (0);
	map = ft_nextline(map);
	i = 0;
	while (i < info.y)
	{
		grid[i] = malloc((info.x + 1) * sizeof(char));
		if (grid[i] == 0)
			return (0);
		fill_row(map, grid[i]);
		map = ft_nextline(map);
		i++;
	}
	grid[i] = 0;
	return (grid);
}
