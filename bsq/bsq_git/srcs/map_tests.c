/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 08:56:05 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 16:06:06 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info.h"
#include "ft.h"

int	test_map_key_valid(char *map, t_info *infoptr)
{
	int	i;

	i = 0;
	while (map[i] != '\0' && map[i] != '\n')
		i++;
	if (i < 4)
		return (0);
	i--;
	infoptr->f = map[i];
	infoptr->o = map[i - 1];
	infoptr->e = map[i - 2];
	if (infoptr->f == infoptr->o)
		return (0);
	if (infoptr->f == infoptr->e)
		return (0);
	if (infoptr->o == infoptr->e)
		return (0);
	return (1);
}

int	test_map_lines_valid(char *map, t_info *infoptr)
{
	int		i;
	int		j;
	int		lines;
	char	nstr[12];

	j = 0;
	while (map[j] != '\n')
		j++;
	i = 0;
	while (i < (j - 3))
	{
		if (map[i] >= '0' && map[i] <= '9')
			nstr[i] = map[i];
		else
			return (0);
		i++;
	}
	if (i == 0)
		return (0);
	nstr[i] = 0;
	lines = ft_atoi(nstr);
	infoptr->y = lines;
	return (lines);
}

int	test_map_lines_match(char *map, t_info *infoptr)
{
	int	lines;

	lines = 0;
	while (*map != '\0')
	{
		if (*map == '\n')
			lines++;
		map++;
	}
	lines--;
	if (lines == infoptr->y)
		return (lines);
	return (0);
}

int	test_map_line_length(char *map)
{
	int	len;
	int	j;

	len = 0;
	map = ft_nextline(map);
	while (*map != '\n' && *map != '\0')
	{
		len++;
		map++;
	}
	map++;
	j = 0;
	while (*map != '\0')
	{
		while (*map != '\n' && *map != '\0')
		{
			j++;
			map++;
		}
		if (j != len)
			return (0);
		j = 0;
		map++;
	}
	return (len);
}

int	test_map_chars_valid(char *map, t_info *infoptr)
{
	int	i;

	i = 0;
	while (map[i] && map[i] != '\n')
		i++;
	i++;
	while (map[i])
	{
		if (map[i] != infoptr->e)
			if (map[i] != infoptr->o)
				if (map[i] != infoptr->f)
					if (map[i] != '\n')
						return (0);
		i++;
	}
	return (1);
}
