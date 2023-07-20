/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:36:26 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/04 11:05:32 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_str_is_printable(char	*str);

void	list_printable(void)
{
	int	i;
	int	i_max;

	i = 0;
	i_max = 127;
	while (i <= i_max)
	{
		printf("%d: %c (%d)\n", i, i, isprint(i));
		i++;
	}
}

int	main(void)
{
	char	*str;
	int		output;

	list_printable();
	str = "Hello!";
	printf("str = %s\n", str);
	output = ft_str_is_printable(str);
	printf("output = %d\n", output);
	str = "He\x01llo with non printable!";
	printf("str = %s\n", str);
	output = ft_str_is_printable(str);
	printf("output = %d\n", output);
	str = "";
	printf("str = %s\n", str);
	output = ft_str_is_printable(str);
	printf("output = %d\n", output);
	return (0);
}
