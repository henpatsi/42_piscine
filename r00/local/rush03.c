/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:53:37 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/01 14:25:11 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int curr_x, int curr_y);

void	rush(int x, int y)
{
	int	curr_x;
	int	curr_y;
	int	max_x;
	int	max_y;

	max_x = x - 1;
	max_y = y - 1;
	if (x > 0 && y > 0)
	{
		curr_y = 0;
		while (curr_y <= max_y)
		{
			curr_x = 0;
			while (curr_x <= max_x)
			{
				ft_putchar(max_x, max_y, curr_x, curr_y);
				curr_x++;
			}
			write(1, "\n", 1);
			curr_y++;
		}
	}
}
