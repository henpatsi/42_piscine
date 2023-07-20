/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:36:52 by hpatsi            #+#    #+#             */
/*   Updated: 2023/06/30 12:34:43 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		count;
	int		correct_answer;

	str = "This is 27 characters long!";
	correct_answer = 27;
	count = ft_strlen(str);
	printf("Actual length: %d\n", correct_answer);
	printf("Function output: %d\n", count);
	return (1);
}
