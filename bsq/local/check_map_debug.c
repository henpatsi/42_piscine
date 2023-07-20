/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:26:52 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/18 13:47:23 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "../includes/info.h"
#include "../includes/map_setup.h"

int test_map_key_valid(char *map, t_info *infoptr);
int test_map_lines_valid(char *map, t_info *infoptr);
int test_map_lines_match(char *map, t_info *infoptr);
int test_map_line_length(char *map);
int test_map_chars_valid(char *map, t_info *infoptr);
int ft_atoi(char *str);

int	main(int argc, char **argv)
{
	t_info	info;
	int		file;
	int 	size;
	char	*map;	
	
	if (argc != 2)
		return (0);
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		return (0);
	map = malloc(1215752192);
	if (map == 0)
		return (0);
	size = read(file, map, 1215752192);
	if (size == 0)
		return (0);
	close(file);
	printf("Got file.\n");
	if (!test_map_key_valid(map, &info))
	{
		printf("Bad key.\n");
		return (0);
	}
	printf("Key ok.\n");
	if (!test_map_lines_valid(map, &info))
	{
		printf("Bad linecount.\n");
		return (0);
	}
	printf("Linecount ok.\n");
	if (!test_map_lines_match(map, &info))
	{
		printf("Linecount mismatch.\n");
		return (0);
	}
	printf("Lines match.\n");
	if (!test_map_line_length(map))
	{
		printf("Line length mismatch.\n");
		return (0);
	}
	printf("Line lengths ok.\n");
	if (!test_map_chars_valid(map, &info))
	{
		printf("Invalid character encountered.\n");
		return (0);
	}
	printf("All chars ok.\n");
	return (1);	
}

int	test_map_key_valid(char *map, t_info *infoptr)
{
	int i;

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
	printf("Keytest : ");
	return (1);
}

int	test_map_lines_valid(char *map, t_info *infoptr)
{
	int		i;
	int		j;
	int 	lines;
	char	nstr[12];

	j = 0;
	while (map[j] != '\n')
		j++;
	i = 0;
	printf(" -> num chars :");
	while (i < (j - 3))
	{
		if (map[i] >= '0' && map[i] <= '9')
			nstr[i] = map[i];
		else
			return (0);
		i++;
	}
	printf("\n");
	if (i == 0)
		return (0);
	nstr[i] = 0;
	lines = ft_atoi(nstr);
	infoptr->y = lines;
	printf("Linetest : ");
	return (lines);
}

int	test_map_lines_match(char *map, t_info *infoptr)
{
	int 	lines;

	lines = 0;
	while (*map != '\0')
	{
		if (*map == '\n')
			lines++;
		map++;
	}
	lines--;
	printf("Linematch test : ");
	if (lines == infoptr->y)
	   return (lines);
	return (0);
}

int	test_map_line_length(char *map)
{
	int	i;
	int len;
	int	j;

	printf("Line length test : ");
	i = 0;
	len = 0;
	while (map[i])
	{
		while (map[i] != '\n')
			i++;
		i++;
		while (map[i] != '\n')
		{
			len++;
			i++;
		}
		i++;
		j = 0;
		while (map[i])
		{
			while (map[i] != '\n')
			{
				j++;
				i++;
			}
			if (j != len)
				return (0);
			j = 0;
			i++;
		}
	}
	return (len);
}

int	test_map_chars_valid(char *map, t_info *infoptr)
{
	int	i;

	printf("Chars valid test : ");
	i = 0;
	while (map[i] && map[i] != '\n')
		i++;
	i++;
	while(map[i])
	{
		if (map[i] != infoptr->e)
			if (map[i] != infoptr->o)
				if (map[i] != '\n')
					return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	num;
	int	neg;

	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	neg = 1;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += (*str - '0');
		str++;
	}
	return (num * neg);
}
