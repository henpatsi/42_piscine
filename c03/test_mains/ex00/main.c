/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:39:45 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/04 09:00:35 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "Hello!";
	char	s2[] = "Hello!";
	char	s3[] = "Bye!";
	char	s4[] = "Hel";
	char	s5[] = "Hello! Bye!";

	/*
	printf("%s == %s (%d)\n", s1, s2, strcmp(s1, s2)); // 0
    printf("%s == %s (%d)\n", s1, s3, strcmp(s1, s3)); // 6
	printf("%s == %s (%d)\n", s1, s4, strcmp(s1, s4)); // 108
	printf("%s == %s (%d)\n", s1, s5, strcmp(s1, s5)); // -32
	*/
	printf("%s == %s (%d)\n", s1, s2, ft_strcmp(s1, s2));
	printf("%s == %s (%d)\n", s1, s3, ft_strcmp(s1, s3));
	printf("%s == %s (%d)\n", s1, s4, ft_strcmp(s1, s4));
	printf("%s == %s (%d)\n", s1, s5, ft_strcmp(s1, s5));
	return (0);
}
