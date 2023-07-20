/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:16:09 by hpatsi            #+#    #+#             */
/*   Updated: 2023/06/30 12:33:08 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		count;
	char	*temp_str;

	count = 0;
	temp_str = &*str;
	while (*temp_str != '\0')
	{
		temp_str++;
		count++;
	}
	return (count);
}
