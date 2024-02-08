/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:29:13 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/08 23:45:13 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*
 * Check the size of my map and stock it
 * @param (**map) array of string
 * @param (t_data *data) ptr to my data structure 
 * @return 0 if the function worked
 */
int	check_size(char **map, t_data *data)
{
	int	i;
	
	i = 0;
	while (map[i])
		i++;
	data->height = i;
	data->rows = i;
	i = 0;
	while (map[0][i])
		i++;
	data->width = i;
	data->cols = i;
	if (data->width == data->height)
		ft_errorexit("Error\nMap: this is a square");
	if (data->width < 3)
		ft_errorexit("Error\nMap: not enought rows");
	if (data->height < 3)
		ft_errorexit("Error\nMap: not enough columns");
	return (0);
}
