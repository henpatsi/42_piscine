/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:03:53 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/04 16:01:58 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_match(char *sub_str, char *to_find)
{
	while (*to_find != '\0')
	{
		if (*sub_str != *to_find)
		{
			return (0);
		}
		sub_str++;
		to_find++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (*to_find == *str)
		{
			if (is_match(str, to_find))
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}
