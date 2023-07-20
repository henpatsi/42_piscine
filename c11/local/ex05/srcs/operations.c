/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:28:07 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/20 08:33:40 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	add(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int mult(int a, int b)
{
	return (a * b);
}

int	div(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (-1);
	}
	return (a / b);
}

int	mod(int a, int b)
{

	if (b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (-1);
	}
	return (a % b);
}
