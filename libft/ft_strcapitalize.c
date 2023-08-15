/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpasi@student.hive.fi>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:35:59 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/04 08:28:08 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strcapitalize(char *str)
{
	char	*tab;
	int		cap_next;

	cap_next = 1;
	tab = str;
	while (*str != '\0')
	{	
		ft_strlowcase(str);
		if ((*str >= 97 && *str <= 122) || (*str >= 48 && *str <= 57))
		{
			if (cap_next && *str >= 97 && *str <= 122)
			{
				*str -= 32;
			}
			cap_next = 0;
		}
		else
		{
			cap_next = 1;
		}
		str++;
	}
	return (tab);
}
