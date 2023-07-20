/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_setup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:16:28 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 17:43:15 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "check_map.h"
#include "ft.h"

char	*setup_map(char	*filename)
{
	char	*map;
	int		f;
	int		size;
	int		r;

	size = check_map(filename);
	if (size == 0)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	map = malloc((size + 1) * sizeof(char));
	if (map == 0)
		return (0);
	r = read(f, map, size);
	if (r == -1)
		free(map);
	close(f);
	return (map);
}

char	*setup_stdinmap(void)
{
	char	*map;

	map = check_stdinmap();
	if (map == 0)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	return (map);
}
