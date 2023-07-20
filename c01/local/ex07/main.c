/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:36:52 by hpatsi            #+#    #+#             */
/*   Updated: 2023/06/30 19:44:15 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	print_arr(int arr[], int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6};
	int	*tab;
	int	size;
	
	tab = &arr[0];
	size = 6;
	print_arr(arr, size);
	ft_rev_int_tab(tab, size);
	print_arr(arr, size);
	return (0);
}
