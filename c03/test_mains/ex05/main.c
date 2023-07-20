/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:49:16 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/05 08:54:22 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			src[] = "world!";
	char			dest[10] = "Hello";
	unsigned int	size = 10;
    char            dest1[10] = "Hello";

	printf("Output from strlcat:\n");
	printf("dest = %s, src = %s, size = %d\n", dest, src, size);
    printf("After ft_strlcat:\n");
    printf("return = %d\n", ft_strlcat(dest, src, size));
    printf("dest = %s\n", dest);

	printf("\nOutput from ft_strlcat:\n");
	printf("dest = %s, src = %s, size = %d\n", dest1, src, size);
	printf("After ft_strlcat:\n");
	printf("return = %d\n", ft_strlcat(dest1, src, size));
	printf("dest = %s\n", dest1); 
	return (0);
}
