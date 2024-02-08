/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:20:58 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/08 17:55:07 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*
 * Free my textures, destroy mlx and win ptr and return succes
 * @param t_data *data : ptr to my data structure
 */
int close_game(t_data *data)
{
    free_textures(data);
    mlx_destroy_window(data->mlx_ptr, data->win_ptr);
    mlx_destroy_image(data->mlx_ptr, data->img);
    exit(EXIT_SUCCESS);
}
