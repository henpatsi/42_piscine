/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:26:49 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 11:50:15 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str, char term)
{
	int	i;

	i = 0;
	while (str[i] != term && str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	num;
	int	neg;

	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	neg = 1;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += (*str - '0');
		str++;
	}
	return (num * neg);
}

char	*ft_nextline(char *str)
{
	while (*str != '\n')
	{
		if (*str == 0)
			return (0);
		str++;
	}
	str++;
	return (str);
}
