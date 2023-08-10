#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <stdlib.h>

#include "ft.h"

void	test_ft_any(void)
{
	char	*strs[] = {"HELLO", "Hello", "hello", 0};
	char	*strs1[] = {"HELLO", "Hello", "heLLo", 0};
	
	printf("\n%s (test with ft_str_islowercase):\n", __func__);
	printf("('HELLO', 'Hello', 'hello', 0) = true: %s\n", ft_any(strs, ft_str_is_lowercase) ? "PASSED" : "FAILED");
	printf("('HELLO', 'Hello', 'hellO', 0) = false: %s\n", !ft_any(strs1, ft_str_is_lowercase) ? "PASSED" : "FAILED");
}

void	test_ft_atoi(void)
{
	printf("\n%s:\n", __func__);
	printf("'0' = 0: %s\n", ft_atoi("0") == 0 ? "PASSED" : "FAILED");
	printf("'1' = 1: %s\n", ft_atoi("1") == 1 ? "PASSED" : "FAILED");
	printf("'-1' = -1: %s\n", ft_atoi("-1") == -1 ? "PASSED" : "FAILED");
	printf("'1234' = 1234: %s\n", ft_atoi("1234") == 1234 ? "PASSED" : "FAILED");
	printf("'-1234' = -1234: %s\n", ft_atoi("-1234") == -1234 ? "PASSED" : "FAILED");
	printf("'2147483647' = 2147483647: %s\n", ft_atoi("2147483647") == 2147483647 ? "PASSED" : "FAILED");
	printf("'-2147483648' = -2147483648: %s\n", ft_atoi("-2147483648") == -2147483648 ? "PASSED" : "FAILED");
	printf("'   -1234' = -1234: %s\n", ft_atoi("   -1234") == -1234 ? "PASSED" : "FAILED");
	printf("' -+--1234asd42' = -1234: %s\n", ft_atoi(" -+--1234asd42") == -1234 ? "PASSED" : "FAILED");
}

void	test_ft_count_if(void)
{	
	char	*strs[] = {"HELLO", "Hello", "hello"};
	char	*strs1[] = {"HELLO", "Hello", "heLLo"};
	char	*strs2[] = {"hello", "hi", "Hello"};
	
	printf("\n%s (test with ft_str_islowercase):\n", __func__);
	printf("('HELLO', 'Hello', 'hello') = 1: %s\n", ft_count_if(strs, 3, ft_str_is_lowercase) == 1 ? "PASSED" : "FAILED");
	printf("('HELLO', 'Hello', 'hellO') = 0: %s\n", ft_count_if(strs1, 3, ft_str_is_lowercase) == 0 ? "PASSED" : "FAILED");
	printf("('hello', 'hi', 'Hello') = 2: %s\n", ft_count_if(strs2, 3, ft_str_is_lowercase) == 2 ? "PASSED" : "FAILED");
}

void test_ft_factorial(void)
{
	printf("\n%s:\n", __func__);
	printf("0 = 1: %s\n", ft_factorial(0) == 1 ? "PASSED" : "FAILED");
	printf("1 = 1: %s\n", ft_factorial(1) == 1 ? "PASSED" : "FAILED");
	printf("3 = 6: %s\n", ft_factorial(3) == 6 ? "PASSED" : "FAILED");
	printf("11 = 39916800: %s\n", ft_factorial(11) == 39916800 ? "PASSED" : "FAILED");
	printf("-1 = 0: %s\n", ft_factorial(-1) == 0 ? "PASSED" : "FAILED");
}

void	test_ft_foreach(void)
{
	int	ints[] = {0, 1, -1, 1234, -1234, 2147483647, -2147483648};
	int	length = 7;
	
	printf("\n%s (test with ft_putnbr):\n", __func__);
	printf("(0, 1, -1, 1234, -1234, 2147483647, -2147483648) output:\n");
	ft_foreach(ints, length, ft_putnbr);
	printf("\n");
}

int	intdif(int a, int b)
{
	return (a - b);
}

void	test_ft_is_sort(void)
{
	int	ints1[] = {0, 1, 2, 2, 3, 4};
	int	ints2[] = {4, 3, 2, 2, 1, 0};
	int	ints3[] = {0, 1, 2, 3, 2, 4};

	printf("\n%s (test with intdif in test main):\n", __func__);
	printf("(0, 1, 2, 2, 3, 4) = true: %s\n", ft_is_sort(ints1, 6, intdif) ? "PASSED" : "FAILED");
	printf("(4, 3, 2, 2, 1, 0) = true: %s\n", ft_is_sort(ints2, 6, intdif) ? "PASSED" : "FAILED");
	printf("(0, 1, 2, 3, 2, 4) = false: %s\n", !ft_is_sort(ints3, 6, intdif) ? "PASSED" : "FAILED");
}

void	test_ft_isspace(void)
{
	char	c = 0;
	
	printf("\n%s:\n", __func__);
	while (1)
	{
		if (isspace(c))
			printf("char decimal %d detected as space: %s\n", c, ft_isspace(c) ? "PASSED" : "FAILED");
		else if (ft_isspace(c))
			printf("char decimal %d incorrectly detected as space: FAILED", c);
		if (c == 127)
			break;
		c++;
	}
}

void test_ft_map(void)
{
	int	ints[] = {-1, 0, 1, 2, 3, 11};
	int	*intsfac;
	
	printf("\n%s (test with ft_factorial):\n", __func__);
	printf("input = (-1, 0, 1, 2, 3, 11)\n");
	intsfac = ft_map(ints, 6, ft_factorial);
	printf("output = (%d, %d, %d, %d, %d, %d)\n", intsfac[0], intsfac[1], intsfac[2], intsfac[3], intsfac[4], intsfac[5]);
	printf("correct = (0, 1, 1, 2, 6, 39916800)\n");
}

void	test_ft_power(void)
{
	printf("\n%s:\n", __func__);
	printf("10^-1 = 0: %s\n", ft_power(10, -1) == 0 ? "PASSED" : "FAILED");
	printf("10⁰ = 1: %s\n", ft_power(10, 0) == 1 ? "PASSED" : "FAILED");
	printf("10¹ = 0: %s\n", ft_power(10, 1) == 10 ? "PASSED" : "FAILED");
	printf("10² = 0: %s\n", ft_power(10, 2) == 100 ? "PASSED" : "FAILED");
}

void	test_ft_putchar(void)
{
	printf("\n%s:\n", __func__);
	ft_putchar('c');
	ft_putchar('\n');
}

void	test_ft_putnbr(void)
{
	printf("\n%s:\n", __func__);	
	printf("(0, 1, -1, 1234, -1234, 2147483647, -2147483648) output:\n");
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(1);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(1234);
	ft_putchar('\n');
	ft_putnbr(-1234);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
}

void	test_ft_putstr(void)
{	
	printf("\n%s:\n", __func__);	
	ft_putstr("Printed using ft_putstr!\n");
}

int	test_range(int	min, int max)
{
	int	*range;
	int	i;

	printf("range %d to %d: ", min, max);
	range = ft_range(min, max);
	if (min >= max)
		return (range == 0);
	i = 0;
	while (min + i < max)
	{
		if (range[i] != min + i)
			return (0);
		i++;
	}
	return (1);	
}

void	test_ft_range(void)
{
	printf("\n%s:\n", __func__);
	printf("%s\n", test_range(0, 10) ? "PASSED" : "FAILED");
	printf("%s\n", test_range(-10, 0) ? "PASSED" : "FAILED");
	printf("%s\n", test_range(-1000000, 1000000) ? "PASSED" : "FAILED");
	printf("%s\n", test_range(1, 1) ? "PASSED" : "FAILED");
	printf("%s\n", test_range(2, 1) ? "PASSED" : "FAILED");
}

void	test_ft_str_is_lowercase(void)
{
	printf("\n%s:\n", __func__);
	printf("HELLO = false: %s\n", !ft_str_is_lowercase("HELLO") ? "PASSED" : "FAILED");
	printf("Hello = false: %s\n", !ft_str_is_lowercase("Hello") ? "PASSED" : "FAILED");
	printf("hellO = false: %s\n", !ft_str_is_lowercase("hellO") ? "PASSED" : "FAILED");
	printf("hello = true: %s\n", ft_str_is_lowercase("hello") ? "PASSED" : "FAILED");
	printf("he77o = false: %s\n", !ft_str_is_lowercase("he770") ? "PASSED" : "FAILED");
}

int	main(void)
{
	test_ft_any();
	test_ft_atoi();
	test_ft_count_if();
	test_ft_factorial();
	test_ft_foreach();
	test_ft_is_sort();
	test_ft_isspace();
	test_ft_map();
	test_ft_power();
	test_ft_putchar();
	test_ft_putnbr();
	test_ft_putstr();
	test_ft_range();

	test_ft_str_is_lowercase();

	printf("\n");
	return (0);
}
