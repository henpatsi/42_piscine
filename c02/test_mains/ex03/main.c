/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:36:26 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/02 17:02:41 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char	*str);

int	main(void)
{
	char	*str;
	int		output;

	str = "0123456789";
	printf("str = %s\n", str);
	output = ft_str_is_numeric(str);
	printf("output = %d\n", output);
	str = "12/11/2023";
	printf("str = %s\n", str);
	output = ft_str_is_numeric(str);
	printf("output = %d\n", output);
	str = "42:24";
	printf("str = %s\n", str);
	output = ft_str_is_numeric(str);
	printf("output = %d\n", output);
	return (0);
}
