/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:36:22 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/04 14:53:28 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = "world!";

	printf("dest = %s\nsrc = %s\n", dest, src);
	printf("After cat:\n");
	printf("dest = %s\n", ft_strncat(dest, src, 3));
	return (0);
}
