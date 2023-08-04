/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:05:12 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/20 08:16:38 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	dif;

	i = 0;
	dif = 0;
	while (i < length - 1)
	{
		if (dif == 0)
			dif = f(tab[i], tab[i + 1]);
		else if (dif < 0 && f(tab[i], tab[i + 1]) > 0)
			return (0);
		else if (dif > 0 && f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}
