/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:18:50 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/10 10:43:11 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_string(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char*s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

void	swap_places(int i, int j, char **argv)
{
	argv[0] = argv[i];
	argv[i] = argv[j];
	argv[j] = argv[0];
}

void	sort_params(int argc, char **argv)
{
	int	si;
	int	ci;

	si = 1;
	while (si < argc)
	{
		ci = si;
		while (ci < argc)
		{
			if (ft_strcmp(argv[si], argv[ci]) > 0)
			{
				swap_places(si, ci, argv);
			}
			ci++;
		}
		write_string(argv[si]);
		si++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (0);
	}
	sort_params(argc, argv);
	return (0);
}
