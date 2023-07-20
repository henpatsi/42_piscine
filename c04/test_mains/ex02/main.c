/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:08:59 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/06 12:16:57 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int	nb;

	nb = 12342;	
	printf("nb = %d\n", nb);
	ft_putnbr(nb);
	nb = INT_MAX;
    printf("\n\nnb = %d\n", nb);
    ft_putnbr(nb);
	nb = -12342;
    printf("\n\nnb = %d\n", nb);
    ft_putnbr(nb);
	nb = INT_MIN;
    printf("\n\nnb = %d\n", nb);
    ft_putnbr(nb);
	nb = 0;
	printf("\n\nnb = %d\n", nb);
    ft_putnbr(nb);
    printf("\n");
	return (0);
}
