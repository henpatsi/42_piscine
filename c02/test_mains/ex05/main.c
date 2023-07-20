/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:36:26 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/03 08:39:45 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char	*str);

int	main(void)
{
	char	*str;
	int		output;

	str = "HELLO";
	printf("str = %s\n", str);
	output = ft_str_is_uppercase(str);
	printf("output = %d\n", output);
	str = "Hello";
	printf("str = %s\n", str);
	output = ft_str_is_uppercase(str);
	printf("output = %d\n", output);
	str = "HELL@";
	printf("str = %s\n", str);
	output = ft_str_is_uppercase(str);
	printf("output = %d\n", output);
	str = "HEL[[O";
	printf("str = %s\n", str);
	output = ft_str_is_uppercase(str);
	printf("output = %d\n", output);
	str = "";
	printf("str = %s\n", str);
	output = ft_str_is_uppercase(str);
	printf("output = %d\n", output);
	return (0);
}
