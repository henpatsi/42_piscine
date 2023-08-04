/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:09:15 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/27 22:09:55 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int	ft_any(char **tab, int (*f)(char*));
int	ft_atoi(char *str);
int	ft_count_if(char **tab, int length, int (*f)(char*));
void	ft_foreach(int *tab, int length, void (*f)(int));
int	ft_is_sort(int *tab, int length, int (*f)(int, int));
int	ft_isspace(char	c);
int	ft_factorial(int nb);
int	ft_power(int nb, int power);
int	*ft_map(int *tab, int length, int (*f)(int));
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int	*ft_range(int min, int max);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);
char	**ft_split(char *str, char *charset);
char	*ft_strcapitalize(char *str);
char	*ft_strcat(char *dest, char *src);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
int	ft_str_is_alpha(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_printable(char *str);
int	ft_str_is_uppercase(char *str);
int	ft_strlen(char *str);
char	*ft_strjoin(int size, char **strs, char *sep);
int	ft_strlen(char *str);
char	*ft_strlowcase(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strupcase(char *str);
void	ft_swap(int *a, int *b);

#endif
