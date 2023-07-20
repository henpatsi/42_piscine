/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:43:42 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/06 13:57:05 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	str[] = "    ---+--+1234ab567";
	char	str1[] = "--2147483647fds";
	char	str2[] = "  +++---2147483648fad";
	char	str3[] = "   \v   ---+--0adf345";
	char	str4[] = "";
	char	str5[] = " \f   -++++++1a342";
	char	str6[] = "\t\t ---+-1adf342324";
	char	str7[] = "  \n ++--043758asdf";

	printf("\nft_atoi output:\n");
	printf("str = %s\noutput = %d\n", str, ft_atoi(str));
	printf("str1 = %s\noutput = %d\n", str1, ft_atoi(str1));
	printf("str2 = %s\noutput = %d\n", str2, ft_atoi(str2));
	printf("str3 = %s\noutput = %d\n", str3, ft_atoi(str3));
	printf("str4 = %s\noutput = %d\n", str4, ft_atoi(str4));
	printf("str5 = %s\noutput = %d\n", str5, ft_atoi(str5));
	printf("str6 = %s\noutput = %d\n", str6, ft_atoi(str6));
	printf("str7 = %s\noutput = %d\n", str7, ft_atoi(str7));
	return (0);
}
