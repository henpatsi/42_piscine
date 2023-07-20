/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:47:54 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/12 17:58:28 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	count;

	count = 1;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src, int size)
{
	char	*dup;
	char	*tab;

	dup = malloc(size * sizeof(char));
	if (dup == NULL)
		return (dup);
	tab = dup;
	while (*src != '\0')
	{
		*dup = *src;
		src++;
		dup++;
	}
	*dup = '\0';
	return (tab);
}

struct s_stock_str	*create_struct(char *src)
{
	t_stock_str	sstr;
	t_stock_str	*ptr;

	ptr = &sstr;
	if (src == 0)
	{
		sstr.size = 0;
		sstr.str = 0;
		sstr.copy = 0;
	}
	else
	{
		sstr.size = str_len(src);
		sstr.str = ft_strdup(src, sstr.size);
		sstr.copy = ft_strdup(src, sstr.size);
	}
	return (ptr);
}

void	free_all(t_stock_str	*tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i].str);
		free(tab[i].copy);
		i++;
	}
	free(tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i] = *(create_struct(av[i]));
		if (tab[i].str == 0 || tab[i].copy == 0)
		{
			free_all(tab, i + 1);
			return (0);
		}
		i++;
	}
	tab[i] = *(create_struct(0));
	return (tab);
}
