/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:29:33 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/07 12:33:21 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	n = 1;
	while (nb > 0)
	{
		n *= nb;
		nb--;
	}
	return (n);
}
