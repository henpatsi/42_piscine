/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:49:16 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/05 13:27:40 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			src[] = "world!";
	char			dest[10] = "Hello";
	unsigned int	size = 10;

	printf("dest = %s, src = %s, size = %d\n", dest, src, size);
	printf("After ft_strlcat:\n");
	printf("return = %d\n", ft_strlcat(dest, src, size));
	printf("dest = %s\n", dest); 
	return (0);
}
