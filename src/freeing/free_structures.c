/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_structures.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 22:09:43 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/09 18:32:10 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*
 * free all my textures 
 * @param t_data *data : ptr to my data structure
*/
void	free_textures(t_data *data)
{
	mlx_destroy_image(data->mlx_ptr, data->ground);
	mlx_destroy_image(data->mlx_ptr, data->wall);
	mlx_destroy_image(data->mlx_ptr, data->player);
	mlx_destroy_image(data->mlx_ptr, data->collectible);
	mlx_destroy_image(data->mlx_ptr, data->exit);
}
