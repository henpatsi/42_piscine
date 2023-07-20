/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 08:55:21 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/07 11:45:21 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb);

int	main(int argc, char **argv)
{
	int	nb;

	if (argc < 2)
	{
		return (1);
	}

	nb = atoi(argv[1]);
	printf("input = %d\noutput = %d\n", nb, ft_sqrt(nb));
	return (0);
}
