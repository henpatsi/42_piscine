/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:53:22 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/11 13:51:37 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	n;
	int	i;

	if (min >= max)
		return (0);
	arr = malloc((max - min) * sizeof(int));
	if (arr == 0)
		return (arr);
	n = min;
	i = 0;
	while (n < max)
	{
		arr[i] = n;
		i++;
		n++;
	}
	return (arr);
}
