/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:47:36 by hpatsi            #+#    #+#             */
/*   Updated: 2023/06/28 16:57:27 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	current_ascii;
	int	ending_ascii;

	current_ascii = 122;
	ending_ascii = 97;
	while (current_ascii >= ending_ascii)
	{
		write(1, &current_ascii, 1);
		current_ascii--;
	}
}
