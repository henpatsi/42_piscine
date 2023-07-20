/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:26:37 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/11 15:53:13 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	n;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = malloc((max - min) * sizeof(int));
	if (arr == 0)
		return (-1);
	*range = arr;
	i = 0;
	n = min;
	while (n < max)
	{
		arr[i] = n;
		i++;
		n++;
	}
	return (max - min);
}
