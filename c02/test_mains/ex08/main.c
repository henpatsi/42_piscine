/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:21:16 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/03 13:33:20 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "AASDfadsfjaisdlpZZv,podFA!!!";

	printf("%s\n", str);
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
