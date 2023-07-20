/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:36:22 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/05 13:10:49 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[20] = "Hello";
	char	src[] = "world!";
	char	desttest[20] = "Hello";

	printf("strncat output:\n");
	printf("dest = %s\nsrc = %s\n", desttest, src);
    printf("After cat:\n");
    printf("dest = %s\n", strncat(desttest, src, 4));

	printf("\nft_strncat output:\n");
	printf("dest = %s\nsrc = %s\n", dest, src);
	printf("After cat:\n");
	printf("dest = %s\n", ft_strncat(dest, src, 4));
	return (0);
}
