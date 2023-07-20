/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:52:10 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/04 12:32:23 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	char	str1[] = "h7sk4ltmua^2U\0*\0&\nadfa\thiaudsf\0x";
	printf("%s\n", str);
	ft_putstr_non_printable(str);
	printf("\n");
	ft_putstr_non_printable(str1);
	printf("\n");
	return (0);
}
