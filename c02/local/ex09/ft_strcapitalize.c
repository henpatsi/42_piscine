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

void	char_to_lower(char *str)
{
	if (*str >= 65 && *str <= 90)
	{
		*str += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*tab;
	int		cap_next;

	cap_next = 1;
	tab = str;
	while (*str != '\0')
	{	
		char_to_lower(str);
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
