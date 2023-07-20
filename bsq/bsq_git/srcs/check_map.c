/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:26:52 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/19 18:11:27 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "info.h"
#include "map_tests.h"
#include "ft.h"

int	all_chars_printable(t_info info)
{
	if (info.e < 32 || info.e > 126)
		return (0);
	if (info.o < 32 || info.o > 126)
		return (0);
	if (info.f < 32 || info.f > 126)
		return (0);
	return (1);
}

int	run_tests(char *map, t_info *infoptr)
{
	if (!test_map_key_valid(map, infoptr))
		return (0);
	if (!test_map_lines_valid(map, infoptr))
		return (0);
	if (!test_map_lines_match(map, infoptr))
		return (0);
	if (!test_map_line_length(map))
		return (0);
	if (!test_map_chars_valid(map, infoptr))
		return (0);
	if (!all_chars_printable(*infoptr))
		return (0);
	return (1);
}

int	check_map(char *filename)
{
	t_info	info;
	int		file;
	int		size;
	char	*map;	

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	map = malloc(1000000000);
	if (map == 0)
		return (0);
	size = read(file, map, 1000000000);
	if (size == 0)
	{
		free(map);
		return (0);
	}
	close(file);
	if (run_tests(map, &info) == 0)
	{
		free(map);
		return (0);
	}
	free(map);
	return (size);
}

char	*check_stdinmap(void)
{
	t_info	info;
	int		size;
	char	*map;

	map = malloc(1000000000);
	if (map == 0)
		return (0);
	size = read(0, map, 1000000000);
	if (size == 0)
	{
		free(map);
		return (0);
	}
	if (run_tests(map, &info) == 0)
	{
		free(map);
		return (0);
	}
	return (map);
}
