/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:15:39 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/11 13:50:29 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

void	str_cpy(char *src, char *dest)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;

	len = ft_strlen(src);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == 0)
		return (dup);
	str_cpy(src, dup);
	return (dup);
}
