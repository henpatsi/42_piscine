/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:55:30 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/03 17:40:52 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_non_printable(char c)
{
	if (c == 127)
	{
		write (1, "7f", 1);
		return ;
	}
	write (1, "\\", 1);
	if (c < 16)
	{
		write (1, "0", 1);
	}
	else
	{
		write (1, "1", 1);
	}
	c = c % 16;
	if (c < 10)
	{
		c += 48;
		write (1, &c, 1);
	}
	else
	{
		c += 87;
		write (1, &c, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			write_non_printable(*str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
