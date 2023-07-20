/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 10:22:24 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/01 14:23:51 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y);

int	main(void)
{
	printf("x = 0, y = 0\n");
	rush(0, 0);
	printf("\nx = 1, y = 0\n");
	rush(1, 0);
	printf("\nx = 0, y = 1\n");
    rush(0, 1);
	printf("\nx = 1, y = 1\n");
    rush(1, 1);
	printf("\nx = 1, y = 4\n");
    rush(1, 4);
	printf("\nx = 4, y = 1\n");
    rush(4, 1);
	printf("\nx = 2, y = 2\n");
    rush(2, 2);
	printf("\nx = 4, y = 2\n");
	rush(4, 2);
	printf("\nx = 2, y = 4\n");
	rush(2, 4);
	printf("\nx = 3, y = 3\n");
    rush(3, 3);
	printf("\nx = 5, y = 5\n");
	rush(5, 5);
	printf("\nx = 123, y = 42\n");
	rush(123, 42);
	printf("\nx = -1, y = -1\n");
	rush(-1, -1);
	printf("\nx = -1, y = 4\n");
    rush(-1, 4);
	printf("\nx = 4, y = -1\n");
    rush(4, -1);
	return (0);
}
