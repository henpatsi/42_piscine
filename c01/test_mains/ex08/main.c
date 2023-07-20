/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 08:37:51 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/01 11:53:28 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	print_arr(int arr[], int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	arr[] = {2, 4, 42, 11, 1, 9, 6, 5, 42, 3, 7};
	int	*tab;
	int	size;

	tab = &arr[0];
	size = 11;
	print_arr(arr, size);
	ft_sort_int_tab(tab, size);
	print_arr(arr, size);
	return (0);
}
