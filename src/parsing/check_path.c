/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:04:36 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/08 18:52:43 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*
 * Use the algorithm flood_fill to fill my map with other elements to find path
 * @param (char **map) An array of string
 * @param (int row) Actual position in row
 * @param (int col) Actual position in col
 */
void    flood_fill(char **map, int row, int col, t_data *data)
{

	if (row < 0 || col < 0 || map[row][col] == '1' 
		|| row > data->height || col > data->width
		|| map[row][col] == '2')
		return;
    map[row][col] = '2';
	flood_fill(map, row + 1, col, data);
    flood_fill(map, row - 1, col, data);
    flood_fill(map, row, col + 1, data);
    flood_fill(map, row, col -1, data);
}

/*
 * Check at the position of the elements P and E if they have been changed to 2
 * exit the program if they have not been found
 * (char **map) An array of string
 * (t_data *data) A ptr to my structure
 */
void	check_fill(char **map, t_data *data)
{
	if (map == NULL)
		ft_errorexit("Error\nMap is wrong\n");
	if (map[data->c_row][data->c_col] == '2')
		data->c_ok += 1;
	if (map[data->e_row][data->e_col] == '2')
		data->e_ok += 1;
	if (data->e_ok < 1 || data->c_ok < 1)
		ft_errorexit("Error\nNo path available\n");
	if (data->e_ok == 1 && data->c_ok >= 1)
		ft_putstr("PATH IS AVAILABLE\n");
}
