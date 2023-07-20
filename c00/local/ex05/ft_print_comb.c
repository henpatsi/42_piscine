/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:53:05 by hpatsi            #+#    #+#             */
/*   Updated: 2023/06/29 14:26:40 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	cnum[3];
	char	sep[2];

	cnum[0] = '0';
	sep[0] = ',';
	sep[1] = ' ';
	while (cnum[0] <= '7')
	{
		cnum[1] = cnum[0] + 1;
		while (cnum[1] <= '8')
		{
			cnum[2] = cnum[1] + 1;
			while (cnum[2] <= '9')
			{
				write(1, &cnum, 3);
				if (cnum[0] != '7')
				{
					write(1, &sep, 2);
				}
				cnum[2]++;
			}
			cnum[1]++;
		}
		cnum[0]++;
	}
}
