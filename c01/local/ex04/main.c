/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:36:52 by hpatsi            #+#    #+#             */
/*   Updated: 2023/06/30 11:30:23 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int		x;
	int		y;
	int		*a;
	int		*b;

	x = 12;
	y = 10;
	a = &x;
	b = &y;
	printf("x = %d, y = %d\n", x, y);
	printf("*a = %d, *b = %d\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("x = %d, y = %d\n", x, y);
	printf("*a = %d, *b = %d\n", *a, *b);
	return (1);
}
