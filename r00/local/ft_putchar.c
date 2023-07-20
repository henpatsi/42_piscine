/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:00:12 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/01 13:27:29 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int max_x, int max_y, int curr_x, int curr_y)
{
	if (curr_x == 0 && (curr_y == 0 || curr_y == max_y))
	{
		write (1, "A", 1);
	}
	else if (curr_x == max_x && (curr_y == 0 || curr_y == max_y))
	{
		write (1, "C", 1);
	}
	else if (curr_x == 0 || curr_y == 0 || curr_x == max_x || curr_y == max_y)
	{
		write (1, "B", 1);
	}
	else
	{
		write (1, " ", 1);
	}
}
