/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:02:02 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/12 10:23:32 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_abs.h"
# include <stdlib.h>
# include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("value = %d\nabs value = %d\n", atoi(argv[1]), ABS(atoi(argv[1])));
	return (0);
}
