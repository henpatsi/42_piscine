/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 08:57:59 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 09:32:47 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_TESTS_H
# define MAP_TESTS_H

int	test_map_key_valid(char *map, t_info *infoptr);
int	test_map_lines_valid(char *map, t_info *infoptr);
int	test_map_lines_match(char *map, t_info *infoptr);
int	test_map_line_length(char *map);
int	test_map_chars_valid(char *map, t_info *infoptr);

#endif
