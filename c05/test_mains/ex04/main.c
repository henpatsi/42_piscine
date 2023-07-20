/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 08:12:04 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/07 08:51:36 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index);

int	main(int argc, char **argv)
{
	int	index;

	if (argc < 2)
	{
		printf("You need to give 1 argument (e.g. ./a.out (index)");
		return (1);
	}
	index = atoi(argv[1]);
	printf("index = %d\nreturn = %d\n", index, ft_fibonacci(index));
}
