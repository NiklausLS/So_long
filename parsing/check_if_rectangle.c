/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_rectangle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:36:56 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/14 12:00:24 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//check if the map is a rectangle
int	check_if_rectangle(char **map)
{
	int	i;
	int	j;
	int	next;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			j++;
			if (i == 0) 
				next = j;
		}
		if (next != j)
		{
			ft_putstr("Error\nRectangle : K.O\n");
			return (-1);
		}
		next = j;
		i++;
	}
	return (0);
}

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
			{
				printf("Error\nSide wall : K.O\n");
				return (-1);
			}
		}
		i++;
	}
	return (0);
}

//count the number of line to check the last line in the next function
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

//check if top and bottom walls are only made of 1
int	check_top_wall(char **map)
{
	int	j;

	j = 0;
	while (map[0][j])
	{
		if (map[0][j] != '1')
		{
			ft_putstr("Error\nTop wall : K.O\n");
			return (-1);
		}
		j++;
	}
	return (0);
}

int	check_bottom_wall(char **map)
{
	int	i;
	int	j;

	i = count_line(map);
	while (map[i][j])
	{
		j = 0;
		if (map[i][j] != '1')
		{
			printf("Error\nBottom wall : K.O\n");
			return (-1);
		}
		j++;
	}
	return (0);
}
