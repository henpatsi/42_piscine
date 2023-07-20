/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:00:56 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/06 10:22:56 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	haystack[] = "There is a needle in me!";
	char	needle[] = "needle";
	char	abc[] = "abc";
	char	abcdef[] = "abcdef";
	char	empty[] = "";
	char	aaabc[] = "aaabc";
	char	aabc[] = "aabc";

	printf("Find '%s' in '%s'\n", needle, haystack);
	printf("%s\n", ft_strstr(haystack, needle));
	printf("Find '%s' in '%s'\n", abcdef, abc);
	printf("%s\n", ft_strstr(abc, abcdef));
	printf("Find '%s' in '%s'\n", empty, haystack);
    printf("%s\n", ft_strstr(haystack, empty));
	printf("Find '%s' in '%s'\n", aabc, aaabc);
    printf("%s\n", ft_strstr(aaabc, aabc));
	return (0);
}
