/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:16:55 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/10 08:25:16 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power);

int	main(int argc, char **argv)
{
	int	nb;
	int	power;

	if (argc < 3)
	{
		printf("You need to give nb and power as arguments (./a.out (nb) (pow))\n");
		return (1);
	}
	nb = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("nb = %d\npower = %d\noutput = %d\n", nb, power, ft_iterative_power(nb, power));
	return (0);
}
