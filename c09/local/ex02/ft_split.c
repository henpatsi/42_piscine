/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:22:32 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/17 20:19:54 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	in_charset(char c, char *charset)
{
	while (*charset != 0)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_seps(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		if (in_charset(*str, charset))
			count++;
		str++;
	}
	return (count);
}

int	str_len(char *str, char *end)
{
	int	count;

	count = 0;
	while (str != end)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *str, char *end)
{
	int		len;
	char	*dup;
	char	*tab;

	len = str_len(str, end);
	dup = malloc(len * sizeof(char));
	if (dup == 0)
		return (dup);
	tab = dup;
	while (str != end)
	{
		*dup = *str;
		str++;
		dup++;
	}
	*dup = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	*start;
	int		i;

	strs = malloc((count_seps(str, charset) + 2) * sizeof(char *));
	if (strs == 0)
		return (0);
	start = str;
	i = 0;
	while (*start != 0)
	{
		if (in_charset(*str, charset) || *str == 0)
		{
			if (str != start && in_charset(*(str - 1), charset) == 0)
			{
				strs[i] = ft_strdup(start, str);
				if (strs[i++] == 0)
					return (0);
			}
			start = str + 1;
		}
		str++;
	}
	strs[i] = 0;
	return (strs);
}
