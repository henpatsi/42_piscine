/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:32:08 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/04 12:16:10 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[] = "world!";
	char	dest[20] = "Hello";

	printf("dest = %s\nsrc = %s\n", dest, src);
	//printf("new dest = %s\n", strcat(dest, src));
	printf("new dest = %s\n", ft_strcat(dest, src));
	return (0);
}
