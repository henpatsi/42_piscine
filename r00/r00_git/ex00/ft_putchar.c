/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 08:22:17 by fdessoy-          #+#    #+#             */
/*   Updated: 2023/07/02 08:49:34 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x_max, int y_max, int x_curr, int y_curr)
{
	if (x_curr == 0 && (y_curr == 0 || y_curr == y_max))
	{
		write (1, "A", 1);
	}
	else if (x_curr == x_max && (y_curr == 0 || y_curr == y_max))
	{
		write (1, "C", 1);
	}
	else if (x_curr == 0 || x_curr == x_max || y_curr == 0 || y_curr == y_max)
	{
		write (1, "B", 1);
	}
	else
	{
		write (1, " ", 1);
	}	
}
