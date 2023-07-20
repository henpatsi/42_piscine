/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:00:34 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/14 11:46:43 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	*str;
	char	*charset;
	char	**strs;

	if (argc < 3)
	{
		printf("You need at least 2 arguments (string, split)");
		return (0);
	}
	str = argv[1];
	charset = argv[2];
	printf("str = %s\nsep = %s\n", str, charset);
	strs = ft_split(str, charset);
	if (strs == 0)
		return (0);
	while (*strs != 0)
	{
		printf("%s\n", *strs);
		strs++;
	}
	return (0);
}
