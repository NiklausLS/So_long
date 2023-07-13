/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:10:11 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/13 13:58:48 by nileempo         ###   ########.fr       */
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
	printf("--- check_elements ---\n");
	while (map[i])
	{
		j = 0;
//		printf("J = %d\n", j);
		while (map[i][j])
		{
//			printf("TEST map[i][j] = %c\n", map[i][j]);
			if (map[i][j] != 'P' && map[i][j] != 'E' && map[i][j] != 'C'
				&& map[i][j] != '1' && map[i][j] != '0')
			{
//				printf ("character is incorrect\n");
				break ;
				return (-1);
			}
		//	else
		//	{
//				printf("map[i] = %s\n", map[i]);
//				printf("BOUCLE J = %d\n", j);
				j++;
		//	}
		}
		printf("map[i] = %s\n", map[i]);
		i++;
		puts("A");
	}
	puts("Z");
	return (0);
}

