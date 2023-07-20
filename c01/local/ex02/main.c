/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:36:52 by hpatsi            #+#    #+#             */
/*   Updated: 2023/06/30 10:43:47 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int		x;
	int		y;
	int		*a;
	int		*b;

	x = 42;
	y = 24;
	a = &x;
	b = &y;
	printf("x = %d, y = %d\n", x, y);
	printf("*a = %d, *b = %d\n", *a, *b);
	ft_swap(a, b);
	printf("x = %d, y = %d\n", x, y);
	printf("*a = %d, *b = %d\n", *a, *b);
	return (1);
}
