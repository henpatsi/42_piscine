/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:41:19 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/13 08:59:25 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int	a;
	int	b;

	ft_putchar('Z');
	a = 42;
	b = 24;
	printf("\n\na = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	ft_putstr("\nputstr test\n");
	printf("\nstrlen of 'hello' = %d\n", ft_strlen("hello"));
	printf("\nstrcmp\n");
	printf("'hello' vs 'hello' = %d\n", ft_strcmp("hello", "hello"));
	printf("'hello' vs 'hel' = %d\n", ft_strcmp("hello", "hel"));
	printf("'hello' vs 'helloo' = %d\n", ft_strcmp("hello", "helloo"));
}
