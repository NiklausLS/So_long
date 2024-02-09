/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_textures.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:52:35 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/09 19:31:37 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	get_ground(t_data *data, int row, int col)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->ground, col * 32, row * 32);
}

void	get_player(t_data *data, int row, int col)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->player, col * 32, row * 32);
}

void	get_wall(t_data *data, int row, int col)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->wall, col * 32, row * 32);
}

void	get_collectible(t_data *data, int row, int col)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->collectible, col * 32, row * 32);
}

void	get_exit(t_data *data, int row, int col)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->exit, col * 32, row * 32);
}
