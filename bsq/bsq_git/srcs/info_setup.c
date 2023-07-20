/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_setup2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:25:48 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/18 12:45:42 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info.h"
#include "ft.h"

char	*get_num_move(char *str, t_info *infoptr)
{
	int		i;
	int		j;
	char	nstr[12];

	j = 0;
	while (str[j] != '\n')
		j++;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9' && i < (j - 3))
	{
		nstr[i] = str[i];
		i++;
	}
	if (i == 0)
		return (0);
	nstr[i] = 0;
	infoptr->y = ft_atoi(nstr);
	return (str);
}

t_info	set_info(char	*map)
{
	t_info	info;
	int		i;

	i = 0;
	while (map[i] != '\0' && map[i] != '\n')
		i++;
	i--;
	info.e = map[i - 2];
	info.o = map[i - 1];
	info.f = map[i];
	map = get_num_move(map, &info);
	map = ft_nextline(map);
	info.x = ft_strlen(map, '\n');
	return (info);
}
