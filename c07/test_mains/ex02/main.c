/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:26:13 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/11 15:47:18 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

void	print_intarray(int *arr, int len)
{
	int i;

	if (arr == 0)
	{
		printf("null pointer");
	}
	i = 0;
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	int	**range;
	int *arr;
	int min;
	int max;
	int	size;

	if (argc < 3)
	{
		printf("Give 2 arguments (min max)");
		return (1);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	arr = 0;
	range = &arr;
	size = ft_ultimate_range(range, min, max);
	printf("min = %d, max = %d\nsize = %d\n", min, max, size);
	print_intarray(*range, max - min);
	free(*range);
	return (0);
}
