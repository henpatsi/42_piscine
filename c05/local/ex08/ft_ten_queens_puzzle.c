/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:09:43 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/09 18:09:03 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_ys(int	*ys)
{
	int		x;
	char	c;

	x = 0;
	while (x < 10)
	{
		c = ys[x] + 48;
		write(1, &c, 1);
		x++;
	}
	write(1, "\n", 1);
}

int	is_acceptable(int x, int y, int *ys)
{
	int	i;
	int	horizontal;

	i = 0;
	while (i < x)
	{
		if (ys[i] == y)
		{
			return (0);
		}
		horizontal = y - ys[i];
		if (horizontal < 0)
			horizontal *= -1;
		if ((x - i) == horizontal)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	place_queen(int x, int *ys)
{
	int	y;
	int	count;

	y = 0;
	count = 0;
	while (y < 10)
	{
		if (is_acceptable(x, y, ys))
		{
			ys[x] = y;
			if (x == 9)
			{
				write_ys(ys);
				return (1);
			}
			else
			{
				count += place_queen(x + 1, ys);
			}
		}
		y++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	y;
	int	ys[10];
	int	count;

	y = 0;
	count = 0;
	while (y < 10)
	{
		ys[0] = y;
		count += place_queen(1, ys);
		y++;
	}
	return (count);
}
