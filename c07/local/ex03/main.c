/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:22:17 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/12 08:20:43 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	str1[] = "";
	char	str2[] = "hi";
	char	str3[] = "hey";
	int		size = 3;
	char	sep[] = " :: ";
	char	**strs = malloc(size * sizeof(char*));	
	int		i;
	char	*joinedstr;

	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	printf("strs contains:\n");
	i = 0;
	while (i < size)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	joinedstr = ft_strjoin(size, strs, sep);
	printf("%s\n", joinedstr);
	free(joinedstr);
	return (0);
}
