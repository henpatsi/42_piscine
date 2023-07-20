/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:47:00 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/07 11:40:20 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	might_be_prime(int nb, int n)
{
	int	maybe_prime;
	int	plusone;
	int	minusone;
	
	plusone = (6 * n) + 1;
	minusone = (6 * n) - 1;
	if (nb == plusone || nb == minusone)
	{
		maybe_prime = 1;
	}
	else if (nb < plusone)
	{
		maybe_prime = 0;
	}
	else
	{
		maybe_prime = might_be_prime(nb, n + 1);
	}
	return maybe_prime;
}

int	ft_is_prime(int nb)
{
	int	mod;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2 || nb == 3)
	{
		return (1);
	}
	mod = 2;
	if (might_be_prime(nb, 1))
	{
		while (mod < nb / 2)
		{
			if (nb % mod == 0)
			{
				return (0);
			}
			mod++;
		}
		return (1);
	}
	return (0);
}
