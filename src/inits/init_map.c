/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:36:57 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/02 10:05:19 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	init_textures(t_data *data)
{
	data->ground = mlx_xpm_file_to_image(data->mlx_ptr, "./images/ground.xpm", &data->width, &data->height);
	if (!data->ground)
		ft_errorexit("Error\nGround texture failed to load\n");
	data->wall = mlx_xpm_file_to_image(data->mlx_ptr, "./images/wall.xpm", &data->width, &data->height);
	if (!data->wall)
		ft_errorexit("Error\nWall texture failed to load\n");
	data->collectible = mlx_xpm_file_to_image(data->mlx_ptr, "./images/collectible.xpm", &data->width, &data->height);
	if (!data->collectible)
		ft_errorexit("Error\nCollectible texture failed to load\n");
	data->player = mlx_xpm_file_to_image(data->mlx_ptr, "./images/player.xpm", &data->width, &data->height);
	if (!data->player)
		ft_errorexit("Error\nCharacter texture failed to load\n");
	data->exit = mlx_xpm_file_to_image(data->mlx_ptr, "./images/exit.xpm", &data->width, &data->height);
	if (!data->exit)
		ft_errorexit("Error\nExit texture failed to load\n");
}
