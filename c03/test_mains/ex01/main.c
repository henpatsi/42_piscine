/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:23:27 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/05 13:03:31 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "abcde";
	char	s2[] = "acbd";
	char	s3[] = "abcde";
	char	s4[] = "abc";
	char	s5[] = "abcdefg";
	char	empty[] = "";
	char	cont_null[] = "hellohi";
	char	cont_null1[] = "hello\0bye";

	printf("strncmp output:\n");	
	printf("%s == %s (%d) cmp %d\n", s1, s2, strncmp(s1, s2, 3), 3);
    printf("%s == %s (%d) cmp %d\n", s1, s2, strncmp(s1, s2, 7), 7);
	printf("%s == %s (%d) cmp %d\n", s1, s3, strncmp(s1, s3, 8), 8);
    printf("%s == %s (%d) cmp %d\n", s1, s3, strncmp(s1, s3, 3), 3);
	printf("%s == %s (%d) cmp %d\n", s1, s4, strncmp(s1, s4, 3), 3);
	printf("%s == %s (%d) cmp %d\n", s1, s4, strncmp(s1, s4, 6), 6);
	printf("%s == %s (%d) cmp %d\n", s1, s5, strncmp(s1, s5, 5), 5);
    printf("%s == %s (%d) cmp %d\n", s1, s5, strncmp(s1, s5, 10), 10);	
	printf("%s == %s (%d) cmp %d\n", s1, empty, strncmp(s1, empty, 10), 10);
	printf("%s == %s (%d) cmp %d\n", empty, s1, strncmp(empty, s1, 10), 10);
	printf("%s == %s (%d) cmp %d\n", s1, s2, strncmp(s1, s2, 0), 0);
	printf("%s == %s (%d) cmp %d\n", cont_null, cont_null1, strncmp(cont_null, cont_null1, 20), 20);
	printf("%s == %s (%d) cmp %d\n", cont_null1, cont_null, strncmp(cont_null1, cont_null, 20), 20);
	printf("%s == %s (%d) cmp %d\n", s1, s3, strncmp(s1, s3, -1), -1);
	printf("%s == %s (%d) cmp %d\n", s1, s3, strncmp(s1, s3, -10), -10);

	printf("\nft_strncmp output:\n");
	printf("%s == %s (%d) cmp %d\n", s1, s2, ft_strncmp(s1, s2, 3), 3); // 0
    printf("%s == %s (%d) cmp %d\n", s1, s2, ft_strncmp(s1, s2, 7), 7); // 0
    printf("%s == %s (%d) cmp %d\n", s1, s3, ft_strncmp(s1, s3, 8), 8); // 6
    printf("%s == %s (%d) cmp %d\n", s1, s3, ft_strncmp(s1, s3, 3), 3); // 6
    printf("%s == %s (%d) cmp %d\n", s1, s4, ft_strncmp(s1, s4, 3), 3); // 0
    printf("%s == %s (%d) cmp %d\n", s1, s4, ft_strncmp(s1, s4, 6), 6); // 108
    printf("%s == %s (%d) cmp %d\n", s1, s5, ft_strncmp(s1, s5, 5), 5); // 0
    printf("%s == %s (%d) cmp %d\n", s1, s5, ft_strncmp(s1, s5, 10), 10); // -32
	printf("%s == %s (%d) cmp %d\n", s1, empty, ft_strncmp(s1, empty, 10), 10);
    printf("%s == %s (%d) cmp %d\n", empty, s1, ft_strncmp(empty, s1, 10), 10);
    printf("%s == %s (%d) cmp %d\n", s1, s2, ft_strncmp(s1, s2, 0), 0); // 0
	printf("%s == %s (%d) cmp %d\n", cont_null, cont_null1, ft_strncmp(cont_null, cont_null1, 20), 20); // 0
	printf("%s == %s (%d) cmp %d\n", cont_null1, cont_null, ft_strncmp(cont_null1, cont_null, 20), 20);
	printf("%s == %s (%d) cmp %d\n", s1, s3, ft_strncmp(s1, s3, -1), -1);
	printf("%s == %s (%d) cmp %d\n", s1, s3, ft_strncmp(s1, s3, -10), -10);
	return (0);
}
