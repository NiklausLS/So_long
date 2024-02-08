/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:06:51 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/08 01:55:17 by nileempo         ###   ########.fr       */
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
 * @param (t_elem *el) ptr on my elem structure
*/
void	check_player(char **map, t_elem *el)
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
				el->p = + 1;
				el->p_row = i;
				el->p_col = j;
			}
			j++;
		}
		i++;
	}
}

/*
 * Check for exit and get his position
 * @param (char **map) array of string
 * @param (t_elem *el) ptr to my elem structure
 */
void	check_exit(char **map, t_elem *el)
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
				el->e = + 1;
				el->e_row = i;
				el->e_col = j;
			}
			j++;
		}
		i++;
	}
}

/*
 * Check for collectible and get his position
 * @param (char **map) array of string
 * @param (t_elem *el) ptr to my elem structure
 */
void	check_collectible(char **map, t_elem *el)
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
				el->c = + 1;
				el->c_row = i;
				el->c_col = j;
			}
			j++;
		}
		i++;
	}
}

/*
 * Check if there are enough elements on the map
 * @param (t_elem *el) ptr to my elem structure
 */
void	check_nbr_of_elem(t_elem *el)
{
	if (el->p != 1)
		ft_errorexit("Error\nStarting position : K.O\n");
	else if (el->e != 1)
		ft_errorexit("Error\nExit : K.O\n");
	else if (el->c < 1)
		ft_errorexit("Error\nCollectible : K.O\n");
}
