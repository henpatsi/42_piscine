/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:56:37 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/11 15:46:16 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

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
	int	*arr;
	int min;
	int max;

	if (argc < 3)
	{
		printf("Two arguments needed (min, max)");
		return (1);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	arr = ft_range(min, max);
	printf("min = %d, max = %d\n", min, max);
	print_intarray(arr, (max - min));
	free(arr);
	return (0);
}
