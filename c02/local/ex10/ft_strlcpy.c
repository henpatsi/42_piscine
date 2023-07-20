/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:49:51 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/03 16:36:50 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	n;

	n = size;
	i = 0;
	while (*src != '\0')
	{
		if (i < (n - 1))
		{
			*dest = *src;
			dest++;
		}
		i++;
		src++;
	}
	*dest = '\0';
	return (i);
}
