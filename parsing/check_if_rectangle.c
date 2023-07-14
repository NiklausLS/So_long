/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_rectangle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:36:56 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/14 09:59:52 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//check if the map is a rectangle
void	check_if_rectangle(char **map)
{
	int	i;
	int	j;
	int	next;

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
void	check_side_walls(char **map)
{
	int	i;
	int	j;

	i = 0;
	puts("check_walls\n");
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			j = ft_strlen(map[i]);
			printf("map[%d] = %s\n", i, map[i]);
			if (map[i][0] != '1' || map[i][j - 1] != '1')
				printf("NOT A WALL\n");
			printf("map[%d][0] = %c | map[%d][%d] = %c\n", i, map[i][0], i, j, map[i][j - 1]);
			if (map[i][0] == '1' && map[i][j - 1] == '1')
				printf("WALLS ARE ALL 1\n");
		}
		i++;
	}
	puts("end of check_walls\n");
}

