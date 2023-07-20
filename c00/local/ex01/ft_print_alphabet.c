/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:31:03 by hpatsi            #+#    #+#             */
/*   Updated: 2023/06/28 16:42:21 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	current_ascii;
	int	ending_ascii;

	current_ascii = 97;
	ending_ascii = 122;
	while (current_ascii <= ending_ascii)
	{
		write(1, &current_ascii, 1);
		current_ascii++;
	}
}
