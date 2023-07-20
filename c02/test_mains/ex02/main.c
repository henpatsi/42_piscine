/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:16:50 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/02 16:34:02 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;
	int		output;

	str = "Hello";
	printf("str = %s\n", str);
	output = ft_str_is_alpha(str);
	printf("output = %d\n", output);
	str = "Hel_o";
	printf("str = %s\n", str);
	output = ft_str_is_alpha(str);
	printf("output = %d\n", output);
	str = "{Hello";
	printf("str = %s\n", str);
	output = ft_str_is_alpha(str);
	printf("output = %d\n", output);
	str = "Hell@";
    printf("str = %s\n", str);
    output = ft_str_is_alpha(str);
    printf("output = %d\n", output);
	str = "";
    printf("str = %s\n", str);
    output = ft_str_is_alpha(str);
    printf("output = %d\n", output);
	return (0);
}
