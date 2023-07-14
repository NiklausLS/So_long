/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_rectangle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:36:56 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/14 08:10:51 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//check if the map is a rectangle
void	check_if_rectangle(char **map)
{
	int		i;
	int		j;
	int		next;

	i = 0;
	printf("--- check_if_rectangle ---\n");
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
			printf("size are not the same : %d and %d\n", j, next);
			break ;
		}
		next = j;
		printf("map[i] : i = %d | J = %d | NEXT = %d\n", i, j, next);
		i++;
	}
}

//check if horizontal walls are only made of 1
/*void	check_walls(char *file)
{
	

}*/


//int	check_x_walls

//check if vertical walls are only made of 1

//int	check_y_walls
