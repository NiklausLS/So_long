/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:06:51 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/01 18:55:47 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//check each element of the map to see if there is something else than PEC10
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
			{
				ft_putstr_fd("Error\nElements check : K.O\n", 2);
				exit (EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
	return (0);
}

//check for collectible and get his position 
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
			if (map[i][j] == 'P')
			{
				el->p += 1;
				el->p_row = i;
				el->p_col = j;
			}
			j++;
		}
		i++;
	}
}

//check for exit and his position
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
				el->e += 1;
				el->e_row = i;
				el->e_col = j;
			}
			j++;
		}
		i++;
	}
}

//check for character and his position 
void	check_character(char **map, t_elem *el)
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
				el->c += 1;
				el->c_row = i;
				el->c_col = j;
			}
			j++;
		}
		i++;
	}
}

//check if there are enough elements on the map
void	check_nbr_of_elem(t_elem *el)
{
	if (el->p != 1)
	{
		ft_putstr_fd("Error\nStarting position : K.O\n", 2);
		exit (EXIT_FAILURE);
	}
	else if (el->e != 1)
	{
		ft_putstr_fd("Error\nExit : K.O\n", 2);
		exit (EXIT_FAILURE);
	}
	else if (el->c != 1)
	{
		ft_putstr_fd("Error\nCollectible : K.O\n", 2);
		exit (EXIT_FAILURE);
	}
}
