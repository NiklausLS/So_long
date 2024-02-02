/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_walls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:35:53 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/02 10:10:47 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//check if horizontal walls are only made of 1
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
				ft_errorexit("Error\nMAP: side wall is wrong\n");
		}
		i++;
	}
	return (0);
}

//check if top wall is only made of 1
int	check_top_wall(char **map)
{
	int	i;

	i = 0;
	while (map[0][i])
	{
		if (map[0][i] != '1')
			ft_errorexit("Error\nMAP: top wall is wrong\n");
		i++;
	}
	return (0);
}

//count the number of line to check the bottom wall
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

//check if the bottom wall is only made of 1
int	check_bottom_wall(char **map)
{
	int	i;
	int	j;

	i = count_line(map) - 1;
	j = 0;
	while (map[i][j])
	{
		if (map[i][j] != '1')
			ft_errorexit("Error\nMAP: bottom wall is wrong\n");
		j++;
	}
	return (0);
}
