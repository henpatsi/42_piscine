/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:52:12 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/05 13:26:59 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{	
	unsigned int	len;

	len = 0;
	while (*dest != '\0')
	{
		len++;
		dest++;
	}
	while (*src != '\0')
	{
		if (len < (size - 1))
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
