/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:17:21 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/07 10:47:30 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	try_get_sqrt(int nb, int sub)
{
	int	count;

	nb = nb - sub;
	if (nb < 0)
	{
		count = 0;
	}
	if (nb == 0)
	{
		count = (sub + 1) / 2;
	}
	if (nb > 0)
	{
		count = try_get_sqrt(nb, sub + 2);
	}
	return (count);
}

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = try_get_sqrt(nb, 1);
	return (sqrt);
}
