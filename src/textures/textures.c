/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:02:05 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/01 23:54:35 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void    make_map(t_data *data, char **map)
{
    int x;
    int y;

    y = 0;
    while (map[y])
    {
        x = 0;
        while (map[y][x])
        {
            mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->ground, x * TILE_SIZE, y * TILE_SIZE);
            if (map[y][x] == '0')
                mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->ground, x * TILE_SIZE, y * TILE_SIZE);
            else if (map[y][x] == '1')
                mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->wall, x * TILE_SIZE, y * TILE_SIZE);
            else if (map[y][x] == 'P')
                mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->player, x * TILE_SIZE, y * TILE_SIZE);
            else if (map[y][x] == 'C')
                mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->collectible, x * TILE_SIZE, y * TILE_SIZE);
            else if (map[y][x] == 'E')
                mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->exit, x * TILE_SIZE, y * TILE_SIZE);
            x++;
        }
        y++;
    }
}