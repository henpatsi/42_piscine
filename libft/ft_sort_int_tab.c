/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 08:38:10 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/01 11:53:54 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	*ptr;
	int	counter;
	int	temp;

	while (size > 0)
	{
		counter = 0;
		ptr = tab;
		while (counter < size)
		{
			if (*ptr < *tab)
			{	
				temp = *tab;
				*tab = *ptr;
				*ptr = temp;
			}
			ptr++;
			counter++;
		}
		tab++;
		size--;
	}
}
