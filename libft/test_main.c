#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

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
	printf("'2147483647' = 2147483647: %s\n", ft_atoi("2147483647") == INT_MAX ? "PASSED" : "FAILED");
	printf("'-2147483648' = -2147483648: %s\n", ft_atoi("-2147483648") == INT_MIN ? "PASSED" : "FAILED");
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
	int	ints[] = {0, 1, -1, 1234, -1234, INT_MAX, INT_MIN};
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
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
	ft_putnbr(INT_MIN);
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

void	print_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	ft_putchar('(');
	while (i < size)
	{
		ft_putnbr(tab[i]);
		if (i != size - 1)
			ft_putstr(", ");
		i++;
	}
	ft_putchar(')');
}

int	*create_random_int_tab(int size)
{
	int	i;
	int	*tab;

	srand(time(0));
	i = 0;
	tab = malloc(size * sizeof(int));
	if (tab == 0)
		return (0);
	while (i < size)
	{
		tab[i] = rand() % 1000;
		i++;
	}
	return (tab);
}

void	test_ft_rev_int_tab(void)
{
	int	ints1[] = {5, 4, 3, 2, 1};
	int	ints2[] = {1, 2, 3, 4};
	int	long_size = 10000;
	int	*ints3 = create_random_int_tab(long_size);
	time_t	start_time;

	printf("\n%s:\n", __func__);
	print_int_tab(ints1, 5);
	ft_putstr(" reversed = ");
	ft_rev_int_tab(ints1, 5);
	print_int_tab(ints1, 5);
	printf("\n");
	print_int_tab(ints2, 4);
	ft_putstr(" reversed = ");
	ft_rev_int_tab(ints2, 4);
	print_int_tab(ints2, 4);
	printf("\n");
	ft_putstr("long list ("); 
	ft_putnbr(long_size);
	ft_putstr(") reverse time: ");
	start_time = time(0);
	ft_sort_int_tab(ints3, long_size);
	printf("%ld seconds\n", time(0) - start_time);
	printf("\n");
}

void	test_ft_sort_int_tab(void)
{
	int	ints1[] = {5, 2, 3, 4, 6, 1, 7, 9, 5, 10, 4, 8};
	int	long_size = 10000;
	int	*ints2 = create_random_int_tab(long_size);
	time_t	start_time;

	printf("\n%s:\n", __func__);
	print_int_tab(ints1, 12);
	ft_putstr(" sorted = ");
	ft_sort_int_tab(ints1, 12);
	print_int_tab(ints1, 12);
	ft_putchar('\n');
	ft_putstr("long list ("); 
	ft_putnbr(long_size);
	ft_putstr(") sort time: ");
	start_time = time(0);
	ft_sort_int_tab(ints2, long_size);
	printf("%ld seconds\n", time(0) - start_time);
}
	
void	print_str_tab(char **tab)
{
	ft_putstr("(\"");
	while (*tab != 0)
	{
		ft_putstr(*tab);
		if (tab[0] != 0 && tab[1] != 0)
			ft_putstr("\", \"");
		tab++;
	}
	ft_putstr("\")");
}

void	test_ft_split(void)
{
	char	*str1 = "Split by spaces.";
	char	*seps1 = " ";
	char	*str2 = "XoooXXoYooZZZZ";
	char	*seps2 = "XYZ";
	char	*str3 = "No split";
	char	*seps3 = "";
	char	*str4 = "All split";
	char	*seps4 = "All split";

	printf("\n%s:\n", __func__);
	printf("\"%s\" split by \"%s\"\n", str1, seps1);
	print_str_tab(ft_split(str1, seps1));
	ft_putchar('\n');
	printf("\"%s\" split by \"%s\"\n", str2, seps2);
	print_str_tab(ft_split(str2, seps2));
	ft_putchar('\n');
	printf("\"%s\" split by \"%s\"\n", str3, seps3);
	print_str_tab(ft_split(str3, seps3));
	ft_putchar('\n');
	printf("\"%s\" split by \"%s\"\n", str4, seps4);
	print_str_tab(ft_split(str4, seps4));
	ft_putchar('\n');
}
	
void	test_ft_strcapitalize(void)
{
	char	str1[] = "salut, COMMENT tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("\n%s:\n", __func__);
	printf("string: %s\n", str1);
	printf("capitalized: %s\n", ft_strcapitalize(str1));
}

void	test_ft_strcat(void)
{
	char	str1[100] = "The cat has a ";
	char	str2[] = "hat";

	printf("\n%s:\n", __func__);
	ft_putstr(str1);
	ft_putchar('\n');
	ft_strcat(str1, str2);
	ft_putstr(ft_strcat(str1, "\n"));
	printf("%s\n", ft_strcmp(str1, "The cat has a hat\n") == 0 ? "PASSED" : "FAILED");
}

void	test_ft_strcmp(void)
{
	char	*str1 = "hi";
	char	*str2 = "Hi";
	char	*str3 = "hii";
	char	*str4 = "h";

	printf("\n%s:\n", __func__);
	printf("%s = %s: (%d = 0) %s\n", str1, str1, ft_strcmp(str1, str1), ft_strcmp(str1, str1) == 0 ? "PASSED" : "FAILED");
	printf("%s = %s: (%d = 32) %s\n", str1, str2, ft_strcmp(str1, str2), ft_strcmp(str1, str2) == 32 ? "PASSED" : "FAILED");
	printf("%s = %s: (%d = -105) %s\n", str1, str3, ft_strcmp(str1, str3), ft_strcmp(str1, str3) == -105 ? "PASSED" : "FAILED");
	printf("%s = %s: (%d = 105) %s\n", str1, str4, ft_strcmp(str1, str4), ft_strcmp(str1, str4) == 105 ? "PASSED" : "FAILED");
}

void	test_ft_strcpy(void)
{
	printf("\n%s:\n", __func__);
	
	char	*src = "retracted";
	char	dest[20] = "secret";

	printf("copy \"%s\" to dest containing \"%s\"\n", src, dest);
	ft_strcpy(dest, src);
	printf("dest = \"%s\": %s\n", dest, ft_strcmp(dest, "retracted") == 0 ? "PASSED" : "FAILED");
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
	time_t start_time = time(0);
	
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
	test_ft_rev_int_tab();
	test_ft_sort_int_tab();
	test_ft_split();
	test_ft_strcapitalize();
	test_ft_strcat();
	test_ft_strcmp();
	test_ft_strcpy();

	test_ft_str_is_lowercase();

	printf("\n");
	printf("Tests finished after %ld seconds!\n", time(0) - start_time);
	return (0);

}
