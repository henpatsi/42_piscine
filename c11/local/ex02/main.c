/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:16:13 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 18:53:04 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*));

int	all_upper(char	*str)
{
	while (*str != 0)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char	**strs;
	int		i;

	strs = malloc(4 * sizeof(char *));
	strs[0] = "hello";
	strs[1] = "heLLo";
	strs[2] = "HELLO";
	strs[3] = 0;
	i = 0;
	printf("strs:\n");
	while (strs[i] != 0)
	{
		printf("%s (%d)\n", strs[i], all_upper(strs[i]));
		i++;
	}
	printf("ft_any(any_upper) = %d\n", ft_any(strs, &all_upper));
}
