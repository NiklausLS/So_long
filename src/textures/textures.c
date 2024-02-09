/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:02:05 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/09 19:30:41 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*
 * Puts elements from my map on the window.
 * @param Ptr to data structure
 * @param Array of string
 */
void	make_map(t_data *data, char **map)
{
	int	row;
	int	col;

	row = 0;
	while (map[row])
	{
		col = 0;
		while (map[row][col])
		{
			get_ground(data, row, col);
			if (map[row][col] == '0')
				get_ground(data, row, col);
			else if (map[row][col] == '1')
				get_wall(data, row, col);
			else if (map[row][col] == 'P')
				get_player(data, row, col);
			else if (map[row][col] == 'C')
				get_collectible(data, row, col);
			else if (map[row][col] == 'E')
				get_exit(data, row, col);
			col++;
		}
		row++;
	}
}
