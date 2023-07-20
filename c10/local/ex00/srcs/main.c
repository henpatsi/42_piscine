/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:33:56 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/18 17:23:57 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

void	read_file(int f)
{
	char	c;
	int		r;

	r = read(f, &c, 1);
	while (r != 0)
	{
		ft_putchar(c, 1);
		r = read(f, &c, 1);
		if (r == -1)
		{
			ft_putstr("Cannot read file.\n", 2);
			return ;
		}
	}
}

int	main(int argc, char **argv)
{
	int		f;

	if (argc < 2)
	{
		ft_putstr("File name missing.\n", 2);
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n", 2);
		return (0);
	}
	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		ft_putstr("Cannot read file.\n", 2);
		return (0);
	}
	read_file(f);
	close(f);
	return (0);
}
