/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:46:37 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/13 18:47:31 by hpatsi           ###   ########.fr       */
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
	int i;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (to_find[0] == str[i])
		{
			if (is_match(&str[i], to_find))
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
