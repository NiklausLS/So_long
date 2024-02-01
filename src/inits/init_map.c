/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:36:57 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/01 23:52:59 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	init_textures(t_data *data)
{
	data->ground = mlx_xpm_file_to_image(data->mlx_ptr, "./images/ground.xpm", &data->width, &data->height);
	if (!data->ground)
	{
		ft_putstr_fd("Error\nGround texture failed to load\n", 2);
		exit(EXIT_FAILURE);
	}
	data->wall = mlx_xpm_file_to_image(data->mlx_ptr, "./images/wall.xpm", &data->width, &data->height);
	if (!data->wall)
	{
		ft_putstr_fd("Error\nWall texture failed to load\n", 2);
		exit(EXIT_FAILURE);
	}
	data->collectible = mlx_xpm_file_to_image(data->mlx_ptr, "./images/collectible.xpm", &data->width, &data->height);
	if (!data->collectible)
	{
		ft_putstr_fd("Error\nCollectible texture failed to load\n", 2);
		exit(EXIT_FAILURE);
	}
	data->player = mlx_xpm_file_to_image(data->mlx_ptr, "./images/player.xpm", &data->width, &data->height);
	if (!data->player)
	{
		ft_putstr_fd("Error\nCharacter texture failed to load\n", 2);
		exit(EXIT_FAILURE);
	}
	data->exit = mlx_xpm_file_to_image(data->mlx_ptr, "./images/exit.xpm", &data->width, &data->height);
	if (!data->exit)
	{
		ft_putstr_fd("Error\nExit texture failed to load\n", 2);
		exit(EXIT_FAILURE);
	}
}
