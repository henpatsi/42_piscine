/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:28:09 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/06 16:51:56 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb);

int	main(int arg_count, char **args)
{
	int nb;

	if (arg_count < 2)
	{
		printf("1 argument for nb needed (e.g. ./a.out 42)\n");
		return (1);
	}
	nb = atoi(args[1]);
	printf("nb = %d\nreturn = %d\n", nb, ft_iterative_factorial(nb));
	return (0);
}
