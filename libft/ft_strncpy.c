/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:32:04 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/04 10:02:35 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*tab;
	int		i_n;

	tab = dest;
	i_n = n;
	while (i_n > 0)
	{	
		*dest = '\0';
		if (*src != '\0')
		{
			*dest = *src;
			src++;
		}
		dest++;
		i_n--;
	}
	return (tab);
}
