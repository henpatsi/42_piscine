/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:48:04 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/12 17:17:35 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);
void free_all(t_stock_str    *tab, int size);

int	main(int argc, char ** argv)
{	
	t_stock_str *tab;
	int i;

	if (argc < 1)
	{
		return (0);
	}
	tab = ft_strs_to_tab(argc, argv);
	if (tab == 0)
		return (1);
	i = 0;
	/*
	while (tab[i].str != 0)
	{
		printf("size = %d\n", tab[i].size);
		printf("str = %s\n", tab[i].str);
		printf("copy = %s\n\n", tab[i].copy);
		i++;
	}
	*/	
	ft_show_tab(tab);
	free_all(tab, argc);
	return (0);
}
