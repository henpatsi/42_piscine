/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 08:59:29 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/04 10:05:19 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	*dest;

	src = "Hello!";
	dest = malloc(10);
	printf("Original:\nSource = %s\nDest = %s\n", src, dest);
	// strcpy(dest, src);
	printf("After ft_strcpy:\nSource = %s\nDest = %s\n", src, ft_strcpy(dest, src));
	return (0);
}
