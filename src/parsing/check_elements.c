/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:06:51 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/08 18:58:01 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*
 * Check for elements other than 0 1 P E C
 * @param (char **map) array of strings
 * @return 0 if no other elements have been found
*/
int	check_elem(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != 'P' && map[i][j] != 'E' && map[i][j] != 'C'
				&& map[i][j] != '1' && map[i][j] != '0')
				ft_errorexit("Error\nElements check : K.O\n");
			j++;
		}
		i++;
	}
	return (0);
}

/* 
 * Check for player and get his position
 * @param (char **map) array of strings
 * @param (t_data *data) ptr on my elem structure
*/
void	check_player(char **map, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
			{
				data->p = + 1;
				data->p_row = i;
				data->p_col = j;
			}
			j++;
		}
		i++;
	}
}

/*
 * Check for exit and get his position
 * @param (char **map) array of string
 * @param (t_data *data) ptr to my elem structure
 */
void	check_exit(char **map, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'E')
			{
				data->e = + 1;
				data->e_row = i;
				data->e_col = j;
			}
			j++;
		}
		i++;
	}
}

/*
 * Check for collectible and get his position
 * @param (char **map) array of string
 * @param (t_data *data) ptr to my elem structure
 */
void	check_collectible(char **map, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'C')
			{
				data->c = + 1;
				data->c_row = i;
				data->c_col = j;
			}
			j++;
		}
		i++;
	}
}

/*
 * Check if there are enough elements on the map
 * @param (t_data *data) ptr to my elem structure
 */
void	check_nbr_of_elem(t_data *data)
{
	if (data->p != 1)
		ft_errorexit("Error\nStarting position : K.O\n");
	else if (data->e != 1)
		ft_errorexit("Error\nExit : K.O\n");
	else if (data->c < 1)
		ft_errorexit("Error\nCollectible : K.O\n");
}
