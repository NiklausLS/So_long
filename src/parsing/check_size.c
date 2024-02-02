/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:29:13 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/02 10:09:51 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//check the size of my map and stock it
int	check_size(char **map, t_data *data)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	data->height = i;
	i = 0;
	while (map[0][i])
		i++;
	data->width = i;
	if (data->height == data->width)
		ft_errorexit("Error\nMap: this is a square");
	if (data->height < 3)
		ft_errorexit("Error\nMap: not enought rows");
	if (data->width < 3)
		ft_errorexit("Error\nMap: not enough columns");
	return (0);
}
