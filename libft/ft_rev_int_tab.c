/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:39:16 by hpatsi            #+#    #+#             */
/*   Updated: 2023/06/30 19:40:13 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*end_ptr;
	int	counter;
	int	temp;

	end_ptr = tab;
	end_ptr += size - 1;
	counter = size / 2;
	while (counter > 0)
	{
		temp = *tab;
		*tab = *end_ptr;
		*end_ptr = temp;
		counter--;
		tab++;
		end_ptr--;
	}
}
