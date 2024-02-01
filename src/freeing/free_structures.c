/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_structures.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 22:09:43 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/27 01:08:59 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void    free_data(t_data *data)
{
    mlx_destroy_window(data->mlx_ptr, data->win_ptr);
    mlx_destroy_image(data->mlx_ptr, data->img);
	free(data->mlx_ptr);
	free(data->ground);
	free(data->wall);
}


/*void    free_elements(t_elements *nbr)
{
    free(nbr->p);
    free(nbr->e);
    free(nbr->c);
}*/