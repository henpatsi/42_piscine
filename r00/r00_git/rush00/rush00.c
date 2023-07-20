/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 10:56:39 by fdessoy-          #+#    #+#             */
/*   Updated: 2023/07/02 12:27:48 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x_max, int y_max, int x_curr, int y_curr);

void	rush(int x, int y)
{
	int	x_curr;
	int	y_curr;
	int	x_max;
	int	y_max;

	if (x > 0 && y > 0)
	{
		x_max = x - 1;
		y_max = y - 1;
		y_curr = 0;
		while (y_curr <= y_max)
		{
			x_curr = 0;
			while (x_curr <= x_max)
			{	
				ft_putchar(x_max, y_max, x_curr, y_curr);
				x_curr++;
			}
			write (1, "\n", 1);
			y_curr++;
		}
	}
}
