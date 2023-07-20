/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:22:06 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/03 11:42:47 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	upstr[1000];
	char	*ptr;

	ptr = &upstr[0];
	while (*str != '\0')
	{
		if (*str >= 97 || *str >= 122)
		{
				*ptr = *str - 32;
		}
		else
		{
			*ptr = *str;
		}
		str++;
		ptr++;
	}
	*ptr = '\0';
	ptr = &upstr[0];
	return (ptr);
}
