/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:21:16 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/03 13:25:34 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "avaodfijv!!AFDavzzaApppvoxc?";

	printf("%s\n", str);
	printf("%s\n", ft_strupcase(str));
	return (0);
}
