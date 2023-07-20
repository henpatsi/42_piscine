/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:36:26 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/02 17:11:11 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char	*str);

int	main(void)
{
	char	*str;
	int		output;

	str = "ahelloz";
	printf("str = %s\n", str);
	output = ft_str_is_lowercase(str);
	printf("output = %d\n", output);
	str = "Hello";
	printf("str = %s\n", str);
	output = ft_str_is_lowercase(str);
	printf("output = %d\n", output);
	str = "43770";
	printf("str = %s\n", str);
	output = ft_str_is_lowercase(str);
	printf("output = %d\n", output);
	str = "";
	printf("str = %s\n", str);
	output = ft_str_is_lowercase(str);
	printf("output = %d\n", output);
	return (0);
}
