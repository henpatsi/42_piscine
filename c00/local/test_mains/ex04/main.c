/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:49:18 by hpatsi            #+#    #+#             */
/*   Updated: 2023/06/28 17:32:56 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	char	newline;

	newline = '\n';
	ft_is_negative(1);
	ft_is_negative(-1);
	ft_is_negative(0);
	write(1, &newline, 1);
	return (1);
}
