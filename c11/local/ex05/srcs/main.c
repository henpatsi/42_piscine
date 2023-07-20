/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:23:55 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/20 09:23:43 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	perform_operation(int a, int b, int (*f)(int, int))
{
	int	result;

	result = f(a, b);
	return (result);
}

int	choose_operation(char *str, int a, int b)
{
	if (*str == 0 || *(str + 1) != 0)
		write(1, "0", 1);
	else if(*str == '+')
		return perform_operation(a, b, &add);
	else if(*str == '-')
		return perform_operation(a, b, &sub);
	else if(*str == '*')
		return perform_operation(a, b, &mult);
	else if(*str == '/')
		return perform_operation(a, b, &div);
	else if(*str == '%')
		return perform_operation(a, b, &mod);
	else
		write(1, "0", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	choose_operation(argv[2], 10, 2);
}
