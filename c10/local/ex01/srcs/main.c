/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:30:49 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/18 19:24:04 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#include "ft.h"

int	open_file(char *filename)
{
	int	f;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		ft_putnstr("No such file or directory", 0, 2);
		return (-1);
	}
	return (f);
}

void	cat_file(char *filename)
{
	int		f;
	int		r;
	char	str[1];

	f = open_file(filename);
	if (f == -1)
		return ;
	r = read(f, str, 1);
	while (r != 0 && r != -1)
	{
		write(1, str, 1);
		r = read(f, str, 1);
	}
	close (f);
}

int	main(int argc, char **argv)
{
	int i;
	
	if (argc < 2)
	{
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		cat_file(argv[i]);
		i++;
	}
	return (0);
}
