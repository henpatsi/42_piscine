/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:12:58 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/10 12:41:35 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	ft_find_next_prime(int nb);

int	main(int argc, char **argv)
{
	int	nb;
	clock_t	start_time;
	int msec;

	if (argc < 2)
	{
		return (1);
	}
	nb = atoi(argv[1]);
	start_time = clock();
	printf("personal best for INT_MAX about 4000 ms\n");
	printf("input = %d\nreturn = %d\n", nb, ft_find_next_prime(nb));
	msec = (clock() - start_time) * 1000 / CLOCKS_PER_SEC;
	printf("time = %d ms\n", msec);
	return (0);
}
