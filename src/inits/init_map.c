/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:36:57 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/01 15:51:22 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	init_textures(t_data *data)
{
	data->ground = mlx_xpm_file_to_image(data->mlx_ptr, "ground.xpm", &data->width, &data->height);
	data->wall = mlx_xpm_file_to_image(data->mlx_ptr, "wall.xpm", &data->width, &data->height);
}
