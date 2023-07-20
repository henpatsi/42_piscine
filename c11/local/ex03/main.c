/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:54:00 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 19:04:17 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_count_if(char **tab, int length, int(*f)(char*));

int	contains_upper(char	*str)
{
	while (*str != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
			return (1);
		str++;
	}
	return (0);
}

int	main(void)
{
	char	**strs;
	int		i;
	int		length;

	strs = malloc(3 * sizeof(char *));
	strs[0] = "hello";
	strs[1] = "heLLo";
	strs[2] = "HELLO";
	length = 3;
	i = 0;
	printf("strs:\n");
	while (i < length)
	{
		printf("%s (%d)\n", strs[i], contains_upper(strs[i]));
		i++;
	}
	printf("ft_count_if(contains_upper) = %d\n", 
			ft_count_if(strs, length, &contains_upper));
}
