/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:52:12 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/04 17:28:32 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{	
	int	len;
	int	s;

	len = 0;
	s = size;
	while (*dest != '\0')
	{
		len++;
		dest++;
	}
	while (*src != '\0')
	{
		if (len < (s - 1))
		{
			*dest = *src;
			dest++;
		}	
		len++;
		src++;
	}
	*dest = '\0';
	return (len);
}
