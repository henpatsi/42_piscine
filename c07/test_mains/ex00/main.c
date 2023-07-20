/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:13:05 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/11 12:47:39 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char	*str;
	char	*dup;

	if (argc < 2)
	{
		printf("args needed\n");
		return (1);
	}
	str = argv[1];
	dup = ft_strdup(str);
	printf("input = %s\nreturn = %s\n", str, dup);
	free(dup);
	return (0);
}
