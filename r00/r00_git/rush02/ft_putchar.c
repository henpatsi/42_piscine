/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 08:22:17 by fdessoy-          #+#    #+#             */
/*   Updated: 2023/07/02 12:28:22 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int x_count, int y_count)
{
	if (y_count == 0 && (x_count == 0 || x_count == x))
	{
		write (1, "A", 1);
	}
	else if ((x_count == x || x_count == 0) && y_count == y)
	{
		write (1, "C", 1);
	}
	else if (x_count == 0 || y_count == 0 || x_count == x || y_count == y)
	{
		write (1, "B", 1);
	}
	else
	{
		write (1, " ", 1);
	}	
}
