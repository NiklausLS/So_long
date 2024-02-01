/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_structures.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 22:09:43 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/01 23:53:22 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//free all the images ressources
void    free_textures(t_data *data)
{
    mlx_destroy_image(data->mlx_ptr, data->ground);
    mlx_destroy_image(data->mlx_ptr, data->wall);
    mlx_destroy_image(data->mlx_ptr, data->player);
    mlx_destroy_image(data->mlx_ptr, data->collectible);
    mlx_destroy_image(data->mlx_ptr, data->exit);
}

int	close_game(t_data *data)
{
	if (data)
    	free_textures(data);
    mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	return (0);
}


/*void    free_elements(t_elements *nbr)
{
    free(nbr->p);
    free(nbr->e);
    free(nbr->c);
}*/