/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:46:53 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/06 14:39:43 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int	neg;
	int	num;

	while (ft_isspace(*str))
		str++;
	neg = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	num = 0;
	while (*str >= 48 && *str <= 57)
	{
		num *= 10;
		num += (*str - 48);
		str++;
	}
	return (num * neg);
}
