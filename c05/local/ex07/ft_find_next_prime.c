/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:38:24 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/10 15:51:59 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	mod;

	if (nb % 2 == 0)
	{
		return (0);
	}
	mod = 3;
	while (mod <= nb / 2)
	{
		if (nb % mod == 0)
		{
			return (0);
		}
		mod += 2;
	}
	return (1);
}

int	get_next_num(int nb)
{
	return (nb + 1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (nb <= 2147483647)
	{
		if (is_prime(nb))
		{
			return (nb);
		}
		nb = get_next_num(nb);
	}
	return (0);
}
