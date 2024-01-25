/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:47:16 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/25 22:45:30 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//initilisation of my structure who counts importants elements

//void    init_structures(t_data data, t_elements *nbr)

static void    init_struct_data(t_data *data)
{
    data->mlx_ptr = NULL;
	data->window = NULL;
    data->img = NULL;
	data->ground = NULL;
	data->wall = NULL;
}

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
	el->c_row = -1;
}

void	init_structures(t_data *data, t_elem *el)
{
	init_struct_data(data);
	init_struct_elements(el);
}
