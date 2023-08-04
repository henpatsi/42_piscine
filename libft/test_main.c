#include <stdio.h>
#include <limits.h>

#include "ft.h"

void	test_ft_any(void)
{
	char	*strs[] = {"HELLO", "Hello", "hello", 0};
	char	*strs1[] = {"HELLO", "Hello", "heLLo", 0};
	
	printf("\nft_any (test with ft_str_islowercase):\n");
	printf("('HELLO', 'Hello', 'hello', 0) = true: %s\n", ft_any(strs, ft_str_is_lowercase) ? "PASSED" : "FAILED");
	printf("('HELLO', 'Hello', 'hellO', 0) = false: %s\n", !ft_any(strs1, ft_str_is_lowercase) ? "PASSED" : "FAILED");
}

void	test_ft_atoi(void)
{
	printf("\nft_atoi:\n");
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
	
	printf("\nft_count_if (test with ft_str_islowercase):\n");
	printf("('HELLO', 'Hello', 'hello') = 1: %s\n", ft_count_if(strs, 3, ft_str_is_lowercase) == 1 ? "PASSED" : "FAILED");
	printf("('HELLO', 'Hello', 'hellO') = 0: %s\n", ft_count_if(strs1, 3, ft_str_is_lowercase) == 0 ? "PASSED" : "FAILED");
	printf("('hello', 'hi', 'Hello') = 2: %s\n", ft_count_if(strs2, 3, ft_str_is_lowercase) == 2 ? "PASSED" : "FAILED");
}

void test_ft_factorial(void)
{
	printf("\nft_factorial:\n");
	printf("0 = 1: %s\n", ft_factorial(0) == 1 ? "PASSED" : "FAILED");
	printf("1 = 1: %s\n", ft_factorial(1) == 1 ? "PASSED" : "FAILED");
	printf("3 = 6: %s\n", ft_factorial(3) == 6 ? "PASSED" : "FAILED");
	printf("11 = 39916800: %s\n", ft_factorial(11) == 39916800 ? "PASSED" : "FAILED");
	printf("-1 = 0: %s\n", ft_factorial(-1) == 0 ? "PASSED" : "FAILED");
}

void	test_ft_str_is_lowercase(void)
{
	printf("\nft_str_is_lowercase\n");
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

	test_ft_str_is_lowercase();

	printf("\n");
	return (0);
}
