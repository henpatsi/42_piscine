/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:36:52 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/02 14:37:43 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int		x;
	int		*********nbr;
	int		********nbr1;
	int		*******nbr2;
	int		******nbr3;
	int		*****nbr4;
	int		****nbr5;
	int		***nbr6;
	int		**nbr7;
	int		*nbr8;

	x = 10;
	nbr8 = &x;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1; 
	printf("%d\n", *********nbr);
	ft_ultimate_ft(nbr);
	printf("%d\n", *********nbr);
	return (1);
}
