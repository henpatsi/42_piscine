/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_setup.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:49:32 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 09:18:16 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_SETUP_H
# define GRID_SETUP_H

void	print_grid(char **grid);
void	free_grid(char **grid);
char	**create_grid(struct s_info info, char *map);

#endif
