/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_walls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:35:53 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/09 18:44:12 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/* 
 * Check if horizontal walls are only made of 1
 * @param (char **map) array of string
 * @return 0 if the function worked
 */
int	check_side_walls(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			j = ft_strlen(map[i]);
			if (map[i][0] != '1' || map[i][j - 1] != '1')
				ft_errorexit("Error\nMAP : side wall is wrong\n");
		}
		i++;
	}
	return (0);
}

/*
 * Check if top wall is only made of 1
 * @param (char **map) array of string
 * @return 0 if the function worked
 */
int	check_top_wall(char **map)
{
	int	i;

	i = 0;
	while (map[0][i])
	{
		if (map[0][i] != '1')
			ft_errorexit("Error\nMAP : top wall is wrong\n");
		i++;
	}
	return (0);
}

/*
 * Count the number of rows
 * @param (char **map) array of string
 * @return the number of rows
 */
static int	count_line(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
			j++;
		i++;
	}
	return (i);
}

/*
 * Check if the bottom wall is only made of 1
 * @param (char **map) array of string
 *  @return 0 if everything worked
 */
int	check_bottom_wall(char **map)
{
	int	i;
	int	j;

	i = count_line(map) - 1;
	j = 0;
	while (map[i][j])
	{
		if (map[i][j] != '1')
			ft_errorexit("Error\nMAP : bottom wall is wrong\n");
		j++;
	}
	return (0);
}

/*
 * Check the size of a line and compare it to the previous to check
 * if the map is a rectangle
 * @param (char **map) array of string
 * @return 0 if everything worked
 */
int	check_form(char **map)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
			j++;
		if (tmp != j && tmp != 0)
			ft_errorexit("Error\nMAP : the map is not a rectangle\n");
		tmp = j;
		i++;
	}
	return (0);
}
