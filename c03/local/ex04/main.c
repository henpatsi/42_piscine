/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:00:56 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/04 16:13:53 by hpatsi           ###   ########.fr       */
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

	printf("%s\n", ft_strstr(haystack, needle));
	printf("%s\n", ft_strstr(abc, abcdef));
	return (0);
}
