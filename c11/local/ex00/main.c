/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:58:05 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 17:16:56 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	print_nums(int *arr)
{
	int	i = 0;

	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

void	print_num(int n)
{
	printf("%d ", n);
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("Array = ");
	print_nums(arr);
	printf("Function output = ");
	ft_foreach(arr, 10, &print_num);
	printf("\n");
}
