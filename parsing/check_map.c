/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:10:11 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/14 12:15:25 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//i have to check if the map is OK

//i need :
//1 P
//1 E
//1 C
//walls all around
//0 for empty spaces 
//
//so the map can only contain P E C 1 0

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
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	find_nbr_of_elem(char **map)
{
	int		i;
	int		j;
	t_map	check;

	i = 0;
	check.p = 0;
	check.e = 0;
	check.c = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
				check.p += 1;
			if (map[i][j] == 'E')
				check.e += 1;
			if (map[i][j] == 'C')
				check.c += 1;
			j++;
		}
		i++;
	}
	return (0);
}

int	check_nbr_of_elem(t_map check)
{
	if (check.p != 1)
	{
		ft_putstr("Error\nStarting position : K.O\n");
		return (-1);
	}
	if (check.e != 1)
	{
		ft_putstr("Error\nExit : K.O\n");
		return (-1);
	}
	if (check.c < 1)
	{
		ft_putstr("Error\nCollectible : K.O\n");
		return (-1);
	}
	printf("check.p = %d\n", check.p);
	printf("check.e = %d\n", check.e);
	printf("check.c = %d\n", check.c);
	return (0);
}
