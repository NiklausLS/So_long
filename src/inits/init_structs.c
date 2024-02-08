/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 01:03:32 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/08 18:57:04 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*
 * Initialise my data structure
 * @param t_data *data : ptr to my data structure
 */
void    init_struct_data(t_data *data)
{
    data->mlx_ptr = NULL;
	data->win_ptr = NULL;
    data->img = NULL;
	data->ground = NULL;
	data->wall = NULL;
	data->collectible = NULL;
	data->exit = NULL;
	data->player = NULL;
	data->p = 0;
	data->e = 0;
	data->c = 0;
	data->p_row = -1;
	data->p_col = -1;
	data->e_row = -1;
	data->e_col = -1;
	data->c_row = -1;
	data->c_col = -1;
	data->c_ok = 0;
	data->e_ok = 0;
}
