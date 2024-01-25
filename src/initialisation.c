/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:47:16 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/25 22:30:13 by nileempo         ###   ########.fr       */
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

static void	init_struct_elements(t_elements *nbr)
{
	nbr->p = 0;
	nbr->e = 0;
	nbr->c = 0;
}

void	init_structures(t_data *data, t_elements *nbr)
{
	init_struct_data(data);
	init_struct_elements(nbr);
}
