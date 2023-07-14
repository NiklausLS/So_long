/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_rectangle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:36:56 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/14 10:44:44 by nileempo         ###   ########.fr       */
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
	puts("end of check_side_walls\n");
}

static int	count_line(char **map)
{
	int	i;
	int	j;

	i = 0;
	puts("begin of count_line\n");
	while (map[i])
	{
		j = 0;
		while (map[i][j])
			j++;
		printf("line is : %s\n", map[i]);
		i++;
	}
	printf("count line = %d\n", i);

	puts("end of count_line\n");
	return (i);
}

void	check_top_bottom_walls(char **map)
{
	int	i;
	int	j;

	i = count_line(map);
	j = 0;
	puts("begin of check_top_bottom_walls\n");
	while (map[0][j])
	{
		puts("test\n");
		if (map[0][j] != '1')
			printf("first line is not made of 1\n");
		j++;
	}
	j = 0;
	puts("second boucle\n");
	i -= 1;
	while (map[i][j])
	{
		puts("test last\n");
		if (map[i][j] != '1')
			printf("last line is not made of 1\n");
		j++;	
	}
	puts("end of check_top_bottom_walls\n");
}
