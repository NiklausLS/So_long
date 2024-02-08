/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 01:03:32 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/06 16:33:04 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*
 * Initialise my data structure
 * @param t_data *data : ptr to my data structure
 */
static void    init_struct_data(t_data *data)
{
    data->mlx_ptr = NULL;
	data->win_ptr = NULL;
    data->img = NULL;
	data->ground = NULL;
	data->wall = NULL;
	data->collectible = NULL;
	data->exit = NULL;
	data->player = NULL;
}

/*
 * Initialise my elements structure
 * @param t_elem *el : ptr to my elem structure
 */
static void	init_struct_elements(t_elem *el)
{
	el->p = 0;
	el->e = 0;
	el->c = 0;
	el->p_row = -1;
	el->p_col = -1;
	el->e_row = -1;
	el->e_col = -1;
	el->c_row = -1;
	el->c_col = -1;
	el->c_ok = 0;
	el->e_ok = 0;
}

/*
 * Call my functions who initialse my structures
 * @param t_data *data : ptr to my data structure
 * @param t_elem *el : ptr to my elem structure
 */
void	init_structures(t_data *data, t_elem *el)
{
	init_struct_data(data);
	init_struct_elements(el);
}
