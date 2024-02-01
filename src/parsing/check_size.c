/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:29:13 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/01 23:12:09 by nileempo         ###   ########.fr       */
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
	{
		ft_putstr_fd("Error\nMap: this is a square", 2);
		exit(EXIT_FAILURE);
	}
	if (data->height < 3)
	{
		ft_putstr_fd("Error\nMap: not enought rows", 2);
		exit(EXIT_FAILURE);
	}
	if (data->width < 3)
	{
		ft_putstr_fd("Error\nMap: not enough columns", 2);
	}
	return (0);
}
