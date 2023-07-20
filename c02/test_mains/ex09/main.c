/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:36:57 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/03 15:20:06 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "salut, COMMENT tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
