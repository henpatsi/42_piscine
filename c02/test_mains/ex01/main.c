/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:31:17 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/04 15:16:50 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char 			dest[100];
	char 			*src;
	unsigned int	n;

	src = "Hello!";
	n = 3;
	printf("Source = %s\nDestination = %s\n", src, dest);
	//strncpy(dest, src, n);
	printf("After ft_strncpy\nSource = %s\nDestination = %s\n", src, ft_strncpy(dest, src, n));
	return (0);
}
