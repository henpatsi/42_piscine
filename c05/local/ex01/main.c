/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:00:31 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/06 17:13:42 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb);

int	main(int argc, char **argv)
{
	int nb;
	
	if (argc < 2)
	{
		printf("You need to give at least one argument (e.g. ./a.out 42)");
		return (1);
	}
	nb = atoi(argv[1]);
	printf("input = %d\noutput = %d\n", nb, ft_recursive_factorial(nb));
	return (0);
}
