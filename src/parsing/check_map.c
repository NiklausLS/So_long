/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:10:11 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/25 19:08:34 by nileempo         ###   ########.fr       */
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
				ft_putstr("Error\nElements check : K.O\n");
				exit (EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	find_nbr_of_elem(char **map, t_data	data)
{
	int		i;
	int		j;

	i = 0;
	data.p = 0;
	data.e = 0;
	data.c = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
				data.p += 1;
			if (map[i][j] == 'E')
				data.e += 1;
			if (map[i][j] == 'C')
				data.c += 1;
			j++;
		}
		i++;
	}
	check_nbr_of_elem(data);
	return (0);
}

int	check_nbr_of_elem(t_data data)
{
	if (data.p != 1)
	{
		ft_putstr("Error\nStarting position : K.O\n");
		exit (EXIT_FAILURE);
	}
	if (data.e != 1)
	{
		ft_putstr("Error\nExit : K.O\n");
		exit (EXIT_FAILURE);
	}
	if (data.c < 1)
	{
		ft_putstr("Error\nCollectible : K.O\n");
		exit (EXIT_FAILURE);
	}
	/*printf("check.p = %d\n", data.p);
	printf("check.e = %d\n", data.e);
	printf("check.c = %d\n", data.c);
	puts("end\n");*/
	return (0);
}
