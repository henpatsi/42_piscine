/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:17:13 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 18:15:40 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

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

int	pow2(int n)
{
	return (n*n);
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("Array = ");
	print_nums(arr);
	printf("Return = ");
	print_nums(ft_map(arr, 10, &pow2));
}
