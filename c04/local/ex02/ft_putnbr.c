/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:14:41 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/06 12:21:19 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	handle_negative(int n)
{
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	return (n);
}	

int	get_div_count(int n)
{
	int	div_count;

	div_count = -1;
	while (n > 0)
	{
		div_count++;
		n = n / 10;
	}
	return (div_count);
}

int	get_divided_num(int n, int divs)
{
	while (divs > 0)
	{
		n = n / 10;
		divs--;
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	int	n;
	int	divs;

	if (nb == 0)
	{
		write (1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	nb = handle_negative(nb);
	divs = get_div_count(nb);
	while (divs >= 0)
	{
		n = get_divided_num(nb, divs);
		n = (n % 10) + 48;
		write (1, &n, 1);
		divs--;
	}
}
