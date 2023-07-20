/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:39:20 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/03 16:37:28 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			src[] = "Copy me!";
	char			short_dest[3];
	char			long_dest[10];
	unsigned int	size;

	size = 3;
	printf("src = %s\n", src);
	printf("return = %d\n", ft_strlcpy(short_dest, src, size));
	printf("dest[3] = %s\n", short_dest);
	size = 10;
	printf("return = %d\n", ft_strlcpy(long_dest, src, size));
	printf("dest[10] = %s\n", long_dest);
	return(0);
}
