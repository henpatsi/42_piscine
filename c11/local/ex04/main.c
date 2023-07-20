/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:04:53 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/20 08:16:40 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

void	print_nums(int *arr, int size)
{
	int	i = 0;

	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

int	int_compare(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	return (1);
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	arr1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int	arr2[] = {1, 2, 3, 5, 4, 11, 10};
	int	arr3[] = {1, 2, 2, 3};

	printf("Array = ");
	print_nums(arr, 10);
	printf("List is sorted = %d\n", ft_is_sort(arr, 10, &int_compare));
	printf("Array = ");
	print_nums(arr1, 10);
	printf("List is sorted = %d\n", ft_is_sort(arr1, 10, &int_compare));
	printf("Array = ");
	print_nums(arr2, 7);
	printf("List is sorted = %d\n", ft_is_sort(arr2, 7, &int_compare));
	printf("Array = ");
	print_nums(arr3, 4);
	printf("List is sorted = %d\n", ft_is_sort(arr3, 4, &int_compare));
}
