/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:37:56 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/05 12:50:01 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*tab;
	int		i;

	tab = dest;
	i = nb;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i > 0)
	{
		*dest = *src;
		src++;
		dest++;
		i--;
	}
	*dest = '\0';
	return (tab);
}
