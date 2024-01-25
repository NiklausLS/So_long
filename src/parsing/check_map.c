/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:10:11 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/25 22:01:50 by nileempo         ###   ########.fr       */
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

int	find_nbr_of_elem(char **map, t_elements *nbr)
{
	int		i;
	int		j;

	i = 0;
	printf("p = %d e = %d c = %d\n", nbr->p, nbr->e, nbr->c);
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
				nbr->p += 1;
			if (map[i][j] == 'E')
				nbr->e += 1;
			if (map[i][j] == 'C')
				nbr->c += 1;
			j++;
		}
		i++;
	}
	check_nbr_of_elem(nbr);
	printf("p = %d e = %d c = %d\n", nbr->p, nbr->e, nbr->c);
	return (0);
}

int	check_nbr_of_elem(t_elements *nbr)
{
	if (nbr->p != 1)
	{
		ft_putstr("Error\nStarting position : K.O\n");
		exit (EXIT_FAILURE);
	}
	if (nbr->e != 1)
	{
		ft_putstr("Error\nExit : K.O\n");
		exit (EXIT_FAILURE);
	}
	if (nbr->c != 1)
	{
		ft_putstr("Error\nCollectible : K.O\n");
		exit (EXIT_FAILURE);
	}
	return (0);
}
