/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:36:52 by hpatsi            #+#    #+#             */
/*   Updated: 2023/06/30 11:04:58 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int		a;
	int		b;
	int		x;
	int		y;
	int		*div;
	int		*mod;

	a = 12;
	b = 10;
	x = -1;
	y = -1;
	div = &x;
	mod = &y;
	printf("a = %d, b = %d\n", a, b);
	printf("x = %d, y = %d\n", x, y);
	printf("*div = %d, *mod = %d\n", *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf("x = %d, y = %d\n", x, y);
	printf("*div = %d, *mod = %d\n", *div, *mod);
	return (1);
}
