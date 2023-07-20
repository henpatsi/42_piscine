/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:20:01 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/06 18:27:46 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power);

int	main(int argc, char **argv)
{
	int	nb;
	int	power;

	if (argc < 3)
	{
		printf("Include arguments for nb and power (e.g. ./a.out (nb) (power))\n");
		return (1);
	}
	nb = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("nb = %d\npower = %d\noutput = %d\n", nb, power, ft_recursive_power(nb, power));
}
